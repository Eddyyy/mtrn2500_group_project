#include "Cylinder.hpp"
#include "Shape.hpp"

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

Cylinder::Cylinder(double x_, double y_, double z_, double radius_, double depth_) : Shape(x_, y_, z_) {
    radius = radius_;
    depth = depth_;
    qluQuadric = gluNewQuadric();
}

Cylinder::Cylinder(double x_, double y_, double z_, double rotation_, double radius_, double depth_) : Shape(x_, y_, z_, rotation_) {
    radius = radius_;
    depth = depth_;
    gluQuadric = gluNewQuadric();
}

Cylinder::~Cylinder() : ~Shape() {
    gluDeleteQuadric(gluQuadric);
}

void Cylinder::draw() {
    glPushMatrix();
    glTranslatef(x, y, z);
    glRotatef(rotation);

    //Cylinder body
    glPushMatrix();
    glTranslatef(0, radius, -depth/2);
    glBegin(GL_QUADS);
    gluCylinder(gluQuadric, radius, radius, depth, GLint a(10), GLint b(10));
    glEnd();
    glPopMatrix();



    glPopMatrix();
}

double Cylinder::get_radius() {
	return radius;
}

double Cylinder::get_depth() {
	return depth;
}

void Cylinder::set_radius(double radius_) {
    radius = radius_;
}

void Cylinder::set_depth(double depth_) {
    depth = depth_;
}

