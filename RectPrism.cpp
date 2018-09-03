#include <iostream>
#include "RectPrism.h"

#include <Windows.h>
#include <tchar.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

using namespace std;

RectPrism::RectPrism() {}

RectPrism::RectPrism(float x, float y, float z) {
	x1 = x;
	y1 = y;
	z1 = z;
}

//RectPrism::~RectPrism() {}

void RectPrism::Rect1() {
	glColor3f(1, 0, 0);
	glBegin(GL_QUADS);
	glVertex3f(-x1/2, 0, -z1/2);
	glVertex3f(-x1/2, y1, -z1/2);
	glVertex3f(x1/2, y1, -z1/2);
	glVertex3f(x1/2, 0, -z1/2);
	glEnd();
}
void RectPrism::Rect2() {
	glColor3f(0, 1, 0);
	glBegin(GL_QUADS);
	glVertex3f(-x1/2, 0, -z1/2);
	glVertex3f(-x1/2, y1, -z1/2);
	glVertex3f(-x1/2, y1, z1/2);
	glVertex3f(-x1/2, 0, z1/2);
	glEnd();
}
void RectPrism::Rect3() {
	glColor3f(0, 0, 1);
	glBegin(GL_QUADS);
	glVertex3f(-x1/2, 0, -z1/2);
	glVertex3f(-x1/2, 0, z1/2);
	glVertex3f(x1/2, 0, z1/2);
	glVertex3f(x1/2, 0, -z1/2);
	glEnd();
}

void RectPrism::draw() {
	//Front and back
	RectPrism::Rect1();
	glPushMatrix();
	glTranslatef(0, 0, z1);
	RectPrism::Rect1();
	glPopMatrix();
	//Right and left
	RectPrism::Rect2();
	glPushMatrix();
	glTranslatef(x1, 0, 0);
	RectPrism::Rect2();
	glPopMatrix();
	//Bottom and top
	RectPrism::Rect3();
	glPushMatrix();
	glTranslatef(0, y1, 0);
	RectPrism::Rect3();
	glPopMatrix();
}