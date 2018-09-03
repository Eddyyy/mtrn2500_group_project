#include <iostream>
#include "TrapPrism.hpp"

#include <Windows.h>
#include <tchar.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

using namespace std;

TrapPrism::TrapPrism() : Shape() {
	a_length = 1.0;
	b_length = 1.0;
	height = 1.0;
	depth = 1.0;
	a_offset = 1.0;
}

TrapPrism::TrapPrism(double x_, double y_, double z_, float a_length_, float b_length_, float height_, float depth_, float a_offset_) : Shape(x_, y_, z_) {
	a_length = a_length_;
	b_length = b_length_;
	height = height_;
	depth = depth_;
	a_offset = a_offset_;
}

TrapPrism::TrapPrism(double x_, double y_, double z_, double rotation_, float a_length_, float b_length_, float height_, float depth_, float a_offset_) : Shape(x_, y_, z_, rotation_) {
	a_length = a_length_;
	b_length = b_length_;
	height = height_;
	depth = depth_;
	a_offset = a_offset_;
}

void TrapPrism::Trap() {
	//glColor3f(1, 0, 0);
	glBegin(GL_POLYGON);
	glVertex3f(a_length/2, 0, -depth/2);
	glVertex3f(a_length/2 - a_offset, height, -depth/2);
	glVertex3f(a_length/2 - a_offset - b_length, height, -depth/2);
	glVertex3f(-a_length/2, 0, -depth/2);
	glEnd();
}
void TrapPrism::Trap1() {
	//glColor3f(0, 1, 0);
	glBegin(GL_POLYGON);
	glVertex3f(a_length/2, 0, -depth/2);
	glVertex3f(-a_length/2, 0, -depth/2);
	glVertex3f(-a_length/2, 0, depth/2);
	glVertex3f(a_length/2, 0, depth/2);
	glEnd();
}
void TrapPrism::Trap2() {
	//glColor3f(0, 0, 1);
	glBegin(GL_POLYGON);
	glVertex3f(a_length/2 - a_offset, height, -depth/2);
	glVertex3f(a_length/2 - a_offset - b_length, height, -depth/2);
	glVertex3f(a_length/2 - a_offset - b_length, height, depth/2);
	glVertex3f(a_length/2 - a_offset, height, depth/2);
	glEnd();
}
void TrapPrism::Trap3() {
	//glColor3f(1, 1, 0);
	glBegin(GL_POLYGON);
	glVertex3f(a_length/2, 0, -depth/2);
	glVertex3f(a_length/2 - a_offset, height, -depth/2);
	glVertex3f(a_length/2 - a_offset, height, depth/2);
	glVertex3f(a_length/2, 0, depth/2);
	glEnd();
}
void TrapPrism::Trap4() {
	//glColor3f(0, 1, 1);
	glBegin(GL_POLYGON);
	glVertex3f(-a_length/2, 0, -depth/2);
	glVertex3f(a_length/2 - a_offset - b_length, height, -depth/2);
	glVertex3f(a_length/2 - a_offset - b_length, height, depth/2);
	glVertex3f(-a_length/2, 0, depth/2);
	glEnd();
}
void TrapPrism::draw() {
	glPushMatrix();
	positionInGL();
	setColorInGL();

	Trap();
	glPushMatrix();
	glTranslatef(0, 0, depth);
	//glColor3f(1, 1, 0);
	Trap();
	glPopMatrix();
	Trap1();
	Trap2();
	Trap3();
	Trap4();

	glPopMatrix();
}