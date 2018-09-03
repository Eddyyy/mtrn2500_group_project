#include "TrapezoidalPrism.hpp"
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

TrapezoidalPrism::TrapezoidalPrism(double x_, double y_, double z_, double a_length_, double b_length_, double depth_, double height_, double a_offset_) : Shape(x_, y_, z_) {

}

TrapezoidalPrism::TrapezoidalPrism(double x_, double y_, double z_, double rotation_, double a_length_, double b_length_, double depth_, double height_, double a_offset_) : Shape(x_, y_, z_, rotation_) {

}

void TrapezoidalPrism::draw() {

}

double TrapezoidalPrism::getA_length() {
	return 0.0;
}

double TrapezoidalPrism::getB_length() {
	return 0.0;
}

double TrapezoidalPrism::get_depth() {
	return 0.0;
}

double TrapezoidalPrism::get_height()
{
	return 0.0;
}

double TrapezoidalPrism::getA_offset()
{
	return 0.0;
}

void TrapezoidalPrism::setA_length(double a_length_) {

}

void TrapezoidalPrism::setB_length(double b_length_) {

}

void TrapezoidalPrism::set_depth(double depth_) {

}

void TrapezoidalPrism::set_height(double height_)
{
}

void TrapezoidalPrism::setA_offset(double a_offset_)
{
}

