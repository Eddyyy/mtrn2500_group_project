#include <iostream>
#include "TriPrism.h"

#include <Windows.h>
#include <tchar.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

#define PI 3.14159265

using namespace std;

TriPrism::TriPrism() {}

TriPrism::TriPrism(float a_, float b_, float theta, float depth) {
	a = a_;
	b = b_;
	t = theta;
	d = depth;
}

void TriPrism::Tri() {
	//glColor3f(1, 0, 1);
	glBegin(GL_POLYGON);
	glVertex3f(b/2, 0, -d/2);
	glVertex3f(-b/2, 0, -d/2);
	float h = a * sin(t * PI / 180);
	float o = a * cos(t * PI / 180);
	glVertex3f(b/2 - o, h, -d/2);
	glEnd();
}
void TriPrism::Tri1() {
	glColor3f(1, 0, 0);
	glBegin(GL_POLYGON);
	glVertex3f(b/2, 0, -d/2);
	glVertex3f(-b/2, 0, -d/2);
	glVertex3f(-b/2, 0, d/2);
	glVertex3f(b/2, 0, d/2);
	glEnd();
}
void TriPrism::Tri2() {
	glColor3f(0, 1, 0);
	glBegin(GL_POLYGON);
	float h = a * sin(t * PI / 180);
	float o = a * cos(t * PI / 180);
	glVertex3f(b/2, 0, -d/2);
	glVertex3f(b/2 - o, h, -d/2);
	glVertex3f(b/2 - o, h, d/2);
	glVertex3f(b/2, 0, d/2);
	glEnd();
}
void TriPrism::Tri3() {
	glColor3f(0, 0, 1);
	glBegin(GL_POLYGON);
	float h = a * sin(t * PI / 180);
	float o = a * cos(t * PI / 180);
	glVertex3f(-b/2, 0, -d/2);
	glVertex3f(b/2 - o, h, -d/2);
	glVertex3f(b/2 - o, h, d/2);
	glVertex3f(-b/2, 0, d/2);
	glEnd();
}
void TriPrism::draw() {
	glColor3f(1, 0, 1);
	Tri();
	glPushMatrix();
	glTranslatef(0, 0, d);
	glColor3f(1, 1, 0);
	Tri();
	glPopMatrix();
	Tri1();
	Tri2();
	Tri3();
}