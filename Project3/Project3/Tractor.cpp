#include "Tractor.hpp"
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

Tractor::Tractor() : MyVehicle() {

	Shape* body = new RectPrism(0.0, 0.0, 0.0, 3.0, 2.0, 2.0);
	body->setColor(0, 1, 1);
    Vehicle::addShape(body);

	TriPrism * driver = new TriPrism(0.75, 2.0, 0.0, 0.5, 0.5, 45, 1.0);
	driver->setColor(1, 0, 0);
	driver->draw();
    Vehicle::addShape(driver);

	TrapPrism * passenger = new TrapPrism(-0.75, 2.0, 0.0, 1.5, 1.0, 1.0, 2.0, 0.25);
	passenger->setColor(0, 0, 1);
	passenger->draw();
    Vehicle::addShape(passenger);

	Cylinder * testCylinder = new Cylinder(1.5, 0.5, 0.0, 90, 0.5, 1.0);
	testCylinder->setColor(1, 1, 0);
	testCylinder->draw();
    Vehicle::addShape(testCylinder);

    Wheel * frontLeftWheel = new Wheel(0.75, 0, 1.0, 0.6, 0.5, true);
	frontLeftWheel->setColor(1, 1, 0);
	frontLeftWheel->draw();
    Vehicle::addShape(frontLeftWheel);
    
    Wheel * frontRightWheel = new Wheel(0.75, 0, -1.0, 0.6, 0.5, true);
	frontRightWheel->setColor(1, 1, 0);
	frontRightWheel->draw();
    Vehicle::addShape(frontRightWheel);

    Wheel * backLeftWheel = new Wheel(-0.75, 0, 1.0, 1.0, 0.5, false);
	backLeftWheel->setColor(1, 0, 0);
	backLeftWheel->draw();
    Vehicle::addShape(backLeftWheel);
    
    Wheel * backRightWheel = new Wheel(-0.75, 0, -1.0, 1.0, 0.5, false);
	backRightWheel->setColor(1, 0, 0);
	backRightWheel->draw();
    Vehicle::addShape(backRightWheel);
}
