#include <iostream>
#include "TrapPrism.h"

#include <Windows.h>
#include <tchar.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

using namespace std;

TrapPrism::TrapPrism() {}

TrapPrism::TrapPrism(float a_, float b_, float height, float depth, float offset) {
	a = a_;
	b = b_;
	h = height;
	d = depth;
	o = offset;
}

void TrapPrism::Trap() {
	glColor3f(1, 0, 0);
	glBegin(GL_POLYGON);
	glVertex3f(a/2, 0, -d/2);
	glVertex3f(a/2 - o, h, -d/2);
	glVertex3f(a/2 - o - b, h, -d/2);
	glVertex3f(-a/2, 0, -d/2);
	glEnd();
}
void TrapPrism::Trap1() {
	glColor3f(0, 1, 0);
	glBegin(GL_POLYGON);
	glVertex3f(a/2, 0, -d/2);
	glVertex3f(-a/2, 0, -d/2);
	glVertex3f(-a/2, 0, d/2);
	glVertex3f(a/2, 0, d/2);
	glEnd();
}
void TrapPrism::Trap2() {
	glColor3f(0, 0, 1);
	glBegin(GL_POLYGON);
	glVertex3f(a/2 - o, h, -d/2);
	glVertex3f(a/2 - o - b, h, -d/2);
	glVertex3f(a/2 - o - b, h, d/2);
	glVertex3f(a/2 - o, h, d/2);
	glEnd();
}
void TrapPrism::Trap3() {
	glColor3f(1, 1, 0);
	glBegin(GL_POLYGON);
	glVertex3f(a/2, 0, -d/2);
	glVertex3f(a/2 - o, h, -d/2);
	glVertex3f(a/2 - o, h, d/2);
	glVertex3f(a/2, 0, d/2);
	glEnd();
}
void TrapPrism::Trap4() {
	glColor3f(0, 1, 1);
	glBegin(GL_POLYGON);
	glVertex3f(-a/2, 0, -d/2);
	glVertex3f(a/2 - o - b, h, -d/2);
	glVertex3f(a/2 - o - b, h, d/2);
	glVertex3f(-a/2, 0, d/2);
	glEnd();
}
void TrapPrism::draw() {
	Trap();
	glPushMatrix();
	glTranslatef(0, 0, d);
	//glColor3f(1, 1, 0);
	Trap();
	glPopMatrix();
	Trap1();
	Trap2();
	Trap3();
	Trap4();
}