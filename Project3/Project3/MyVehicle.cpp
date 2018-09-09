#include "MyVehicle.hpp"
#include "Shape.hpp"
#include "RectPrism.hpp"
#include "TriPrism.hpp"
#include "TrapPrism.hpp"
#include "Cylinder.hpp"
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
	Shape* body = new RectPrism(0.0, 0.0, 0.0, 3.0, 2.0, 2.0);
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
	testCylinder->draw();
}

void MyVehicle::draw() {
	glPushMatrix();
	positionInGL();
	setColorInGL();

	for (std::vector<Shape *>::iterator item = shapes.begin();
		 item != shapes.end();
		 item++) {
		(*item)->draw();
	}

	glPopMatrix();
}

VehicleModel MyVehicle::getServerModel()
{
	return VehicleModel();
}
