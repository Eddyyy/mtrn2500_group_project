#include "RectangularPrism.hpp"
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

RectangularPrism::RectangularPrism(double x_, double y_, double z_, double x_length_, double y_length_, double z_length_) : Shape(x_, y_, z_) {
    x_length = x_length_;
    y_length = y_length_;
    z_length = z_length_;
}

RectangularPrism::RectangularPrism(double x_, double y_, double z_, double rotation_, double x_length_, double y_length_, double z_length_) : Shape(x_, y_, z_, rotation_) {
    x_length = x_length_;
    y_length = y_length_;
    z_length = z_length_;
}

void RectangularPrism::draw() {
    //TODO
}

double RectangularPrism::getX_length() {
	return x_length;
}

double RectangularPrism::getY_length() {
	return y_length;
}

double RectangularPrism::getZ_length() {
	return z_length;
}

void RectangularPrism::setX_length(double x_length_) {
    x_length = x_length_;
}

void RectangularPrism::setY_length(double y_length_) {
    y_length = y_length_;
}

void RectangularPrism::setZ_length(double z_length_) {
    z_length = z_length_;
}
