#include "MyVehicle.hpp"
#include "Shape.hpp"
#include "RectPrism.hpp"


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
	Shape* body = new RectPrism(0, 0, 0, 3, 2, 2);
	body->setColor(0, 1, 1);
	MyVehicle::addShape(body);
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