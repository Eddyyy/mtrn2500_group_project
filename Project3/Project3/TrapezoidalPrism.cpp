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
    a_length = a_length_;
    b_length = b_length_;
    depth = depth_;
    height = height_;
    a_offset = a_offset_;
}

TrapezoidalPrism::TrapezoidalPrism(double x_, double y_, double z_, double rotation_, double a_length_, double b_length_, double depth_, double height_, double a_offset_) : Shape(x_, y_, z_, rotation_) {
    a_length = a_length_;
    b_length = b_length_;
    depth = depth_;
    height = height_;
    a_offset = a_offset_;
}

void TrapezoidalPrism::draw() {
    //TODO
}

double TrapezoidalPrism::getA_length() {
	return a_length;
}

double TrapezoidalPrism::getB_length() {
	return b_length;
}

double TrapezoidalPrism::get_depth() {
	return depth;
}

double TrapezoidalPrism::get_height() {
	return height;
}

double TrapezoidalPrism::getA_offset() {
	return a_offset;
}

void TrapezoidalPrism::setA_length(double a_length_) {
    a_length = a_length_;
}

void TrapezoidalPrism::setB_length(double b_length_) {
    b_length = b_length_;
}

void TrapezoidalPrism::set_depth(double depth_) {
    depth = depth_;
}

void TrapezoidalPrism::set_height(double height_) {
    height = height_;
}

void TrapezoidalPrism::setA_offset(double a_offset_) {
    a_offset = a_offset_;
}

