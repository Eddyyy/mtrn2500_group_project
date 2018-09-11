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

Wheel::Wheel() : Cylinder() {
    isSteering = false;
    linearVelocity = 0;
    steeringAngle = 0;
}

Wheel::Wheel(double x_, double y_, double z_, double radius_, double depth_, bool isSteering_) : Cylinder(x_, y_, z_, radius_, depth_) {
    isSteering = isSteering_;
    linearVelocity = 0;
    steeringAngle = 0;
}
Wheel::Wheel(double x_, double y_, double z_, double rotation_, double radius_, double depth_, bool isSteering_) : Cylinder(x_, y_, z_, rotation_, radius_, depth_) {
    isSteering = isSteering_;
    linearVelocity = 0;
    steeringAngle = 0;
}

Wheel::Wheel(ShapeInit shapeStruct) : Cylinder(shapeStruct) {
    isSteering = shapeStruct.params.cyl.isSteering;
    linearVelocity = 0;
    steeringAngle = 0;
}

void Wheel::draw() {
    glPushMatrix();
	positionInGL();
	setColorInGL();
    
    glRotated(-steeringAngle, 0, 1, 0);

    //Wheel body
    glPushMatrix();
    glTranslatef(0, radius, -depth/2);
	GLUquadric * quadric = gluNewQuadric();
	gluQuadricDrawStyle(quadric, GLU_FILL);
	gluQuadricNormals(quadric, GLU_SMOOTH);
    gluCylinder(quadric, radius, radius, depth, 50, 10);
	gluDeleteQuadric(quadric);
    glPopMatrix();

	//Wheel face
	glPushMatrix();
	glTranslatef(0, radius, -depth/2);
	quadric = gluNewQuadric();
	gluQuadricDrawStyle(quadric, GLU_FILL);
	gluQuadricNormals(quadric, GLU_SMOOTH);
	gluDisk(quadric, 0, radius, 50, 10);
	gluDeleteQuadric(quadric);
	glPopMatrix();

	// Wheel face
	glPushMatrix();
	glTranslatef(0, radius, depth/2);
	quadric = gluNewQuadric();
	gluQuadricDrawStyle(quadric, GLU_FILL);
	gluQuadricNormals(quadric, GLU_SMOOTH);
	gluDisk(quadric, 0, radius, 50, 10);
	gluDeleteQuadric(quadric);
	glPopMatrix();

    glPopMatrix();
}

void Wheel::setWheelSpeed(double speed) {
    linearVelocity = speed;
}
void Wheel::setSteeringAngle(double angle) {
    steeringAngle = angle;
}
double Wheel::getIsSteering() {
    return isSteering;
}

ShapeInit Wheel::getServerModel() {
    ShapeInit shapeModel = Cylinder::getServerModel();

    shapeModel.params.cyl.isRolling = true;
    shapeModel.params.cyl.isSteering = isSteering;

    return shapeModel;
}
