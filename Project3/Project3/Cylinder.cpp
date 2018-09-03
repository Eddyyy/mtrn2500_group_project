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

}

Cylinder::Cylinder(double x_, double y_, double z_, double rotation_, double radius_, double depth_) : Shape(x_, y_, z_, rotation_) {

}

void Cylinder::draw() {

}

double Cylinder::get_radius() {
	return 0.0;
}

double Cylinder::get_depth() {
	return 0.0;
}

void Cylinder::set_radius(double radius_) {

}

void Cylinder::set_depth(double depth_) {

}

