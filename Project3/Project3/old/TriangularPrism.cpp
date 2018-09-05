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
    a_length = a_length_;
    b_length = b_length_;
    depth = depth_;
    theta = theta_;
}

TriangularPrism::TriangularPrism(double x_, double y_, double z_, double rotation_, double a_length_, double b_length_, double depth_, double theta_) : Shape(x_, y_, z_, rotation_) {
    a_length = a_length_;
    b_length = b_length_;
    depth = depth_;
    theta = theta_;

}

void TriangularPrism::draw() {
    //TODO
}

double TriangularPrism::getA_length() {
	return a_length;
}

double TriangularPrism::getB_length() {
	return b_length;
}

double TriangularPrism::get_depth() {
	return depth;
}

double TriangularPrism::get_theta() {
	return theta;
}

void TriangularPrism::setA_length(double a_length_) {
    a_length = a_length_;
}

void TriangularPrism::setB_length(double b_length_) {
    b_length = b_length_;
}

void TriangularPrism::set_depth(double depth_) {
    depth = depth_;
}

void TriangularPrism::set_theta(double theta_) {
    theta = theta_;
}
