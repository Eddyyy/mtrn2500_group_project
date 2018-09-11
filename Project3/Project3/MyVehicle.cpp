#include "MyVehicle.hpp"
#include "Shape.hpp"
#include "RectPrism.hpp"
#include "TriPrism.hpp"
#include "TrapPrism.hpp"
#include "Cylinder.hpp"
#include "Wheel.hpp"
#include "Messages.hpp"


#ifdef __APPLE__
#include <OpenGL/gl.h>
#include <OpenGL/glu.h>
#include <GLUT/glut.h>
#elif defined(WIN32)
#include <Windows.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#else
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#endif

MyVehicle::MyVehicle() : Vehicle() {
	/*Shape* body = new RectPrism(0.0, 0.0, 0.0, 3.0, 2.0, 2.0);
	body->setColor(0, 1, 1);
	MyVehicle::addShape(body);

	TriPrism * driver = new TriPrism(0.75, 2.0, 0.0, 0.5, 0.5, 45, 1.0);
	driver->setColor(1, 0, 0);
	driver->draw();
	MyVehicle::addShape(driver);

	TrapPrism * passenger = new TrapPrism(-0.75, 2.0, 0.0, 1.5, 1.0, 1.0, 2.0, 0.25);
	passenger->setColor(0, 0, 1);
	passenger->draw();
	MyVehicle::addShape(passenger);

	Cylinder * testCylinder = new Cylinder(1.5, 0.5, 0.0, 90, 0.5, 1.0);
	testCylinder->setColor(1, 1, 0);
	testCylinder->draw();*/
}

MyVehicle::MyVehicle(std::vector<ShapeInit> shapes_) {
	for (std::vector<ShapeInit>::iterator item = shapes_.begin();
		item != shapes_.end();
		item++) {
		Shape* new_shape = NULL;
		switch((*item).type) {
			case RECTANGULAR_PRISM:
				new_shape = new RectPrism(*item);
				break;
			case TRIANGULAR_PRISM:
				new_shape = new TriPrism(*item);
				break;
			case TRAPEZOIDAL_PRISM:
				new_shape = new TrapPrism(*item);
				break;
			case CYLINDER:
                if ((*item).params.cyl.isRolling) {
				    new_shape = new Wheel(*item);
                } else {
                    new_shape = new Cylinder(*item);
                }
				break;
			case UNKNOWN_SHAPE:
				new_shape = NULL;
				break;
		}
		MyVehicle::addShape(new_shape);
	}
}

void MyVehicle::draw() {
	glPushMatrix();
	positionInGL();
	setColorInGL();

	for (std::vector<Shape *>::iterator item = shapes.begin();
		 item != shapes.end();
		 item++) {
        if (dynamic_cast<Wheel*>(*item)) {
            Wheel* wheelShape = dynamic_cast<Wheel*>(*item);
            wheelShape->setWheelSpeed(speed);
            if (wheelShape->getIsSteering()) {
                wheelShape->setSteeringAngle(steering);
            }
        }
        (*item)->draw();
	}

	glPopMatrix();
}

std::vector<ShapeInit> MyVehicle::getVehicleServerModelVector() {
	std::vector<ShapeInit> vehicleShapes;
	for (std::vector<Shape *>::iterator item = shapes.begin();
			item != shapes.end();
			item++) {
		vehicleShapes.push_back((*item)->getServerModel());
	}
	return vehicleShapes;
}
