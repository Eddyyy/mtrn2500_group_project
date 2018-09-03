#include "TriangularPrism.hpp"
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

TriangularPrism::TriangularPrism(double x_, double y_, double z_, double a_length_, double b_length_, double depth_, double theta_) : Shape(x_, y_, z_) {

}

TriangularPrism::TriangularPrism(double x_, double y_, double z_, double rotation_, double a_length_, double b_length_, double depth_, double theta_) : Shape(x_, y_, z_, rotation_) {

}

void TriangularPrism::draw() {

}

double TriangularPrism::getA_length() {
	return 0.0;
}

double TriangularPrism::getB_length() {
	return 0.0;
}

double TriangularPrism::get_depth() {
	return 0.0;
}

double TriangularPrism::get_theta()
{
	return 0.0;
}

void TriangularPrism::setA_length(double a_length_) {

}

void TriangularPrism::setB_length(double b_length_) {

}

void TriangularPrism::set_depth(double depth_) {

}

void TriangularPrism::set_theta(double theta_)
{
}
