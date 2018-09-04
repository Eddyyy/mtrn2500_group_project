#include <iostream>
#include "TriPrism.hpp"

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

#define PI 3.14159265

using namespace std;

TriPrism::TriPrism() : Shape() {
	a_length = 1.0;
	b_length = 1.0;
	theta = 90;
	depth = 1.0;
}

TriPrism::TriPrism(double x_, double y_, double z_, float a_length_, float b_length_, float theta_, float depth_) : Shape(x_, y_, z_) {
	a_length = a_length_;
	b_length = b_length_;
	theta = theta_;
	depth = depth_;
}

TriPrism::TriPrism(double x_, double y_, double z_, double rotation_, float a_length_, float b_length_, float theta_, float depth_) : Shape(x_, y_, z_, rotation_) {
	a_length = a_length_;
	b_length = b_length_;
	theta = theta_;
	depth = depth_;
}

void TriPrism::Tri() {
	//glColor3f(1, 0, 1);
	glBegin(GL_POLYGON);
	glVertex3f(b_length/2, 0, -depth/2);
	glVertex3f(-b_length/2, 0, -depth/2);
	float h = a_length * sin(theta * PI / 180);
	float o = a_length * cos(theta * PI / 180);
	glVertex3f(b_length/2 - o, h, -depth/2);
	glEnd();
}
void TriPrism::Tri1() {
	//glColor3f(1, 0, 0);
	glBegin(GL_POLYGON);
	glVertex3f(b_length/2, 0, -depth/2);
	glVertex3f(-b_length/2, 0, -depth/2);
	glVertex3f(-b_length/2, 0, depth/2);
	glVertex3f(b_length/2, 0, depth/2);
	glEnd();
}
void TriPrism::Tri2() {
	//glColor3f(0, 1, 0);
	glBegin(GL_POLYGON);
	float h = a_length * sin(theta * PI / 180);
	float o = a_length * cos(theta * PI / 180);
	glVertex3f(b_length/2, 0, -depth/2);
	glVertex3f(b_length/2 - o, h, -depth/2);
	glVertex3f(b_length/2 - o, h, depth/2);
	glVertex3f(b_length/2, 0, depth/2);
	glEnd();
}
void TriPrism::Tri3() {
	//glColor3f(0, 0, 1);
	glBegin(GL_POLYGON);
	float h = a_length * sin(theta * PI / 180);
	float o = a_length * cos(theta * PI / 180);
	glVertex3f(-b_length/2, 0, -depth/2);
	glVertex3f(b_length/2 - o, h, -depth/2);
	glVertex3f(b_length/2 - o, h, depth/2);
	glVertex3f(-b_length/2, 0, depth/2);
	glEnd();
}
void TriPrism::draw() {
	glPushMatrix();
	positionInGL();
	setColorInGL();

	//glColor3f(1, 0, 1);
	Tri();
	glPushMatrix();
	glTranslatef(0, 0, depth);
	//glColor3f(1, 1, 0);
	Tri();
	glPopMatrix();
	Tri1();
	Tri2();
	Tri3();

	glPopMatrix();
}
