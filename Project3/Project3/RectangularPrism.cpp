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

}

RectangularPrism::RectangularPrism(double x_, double y_, double z_, double rotation_, double x_length_, double y_length_, double z_length_) : Shape(x_, y_, z_, rotation_) {

}

void RectangularPrism::draw() {

}

double RectangularPrism::getX_length() {
	return 0.0;
}

double RectangularPrism::getY_length() {
	return 0.0;
}

double RectangularPrism::getZ_length() {
	return 0.0;
}

void RectangularPrism::setX_length(double x_length_) {
}

void RectangularPrism::setY_length(double y_length_) {
}

void RectangularPrism::setZ_length(double z_length_) {
}
