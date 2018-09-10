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
}

Wheel::Wheel(double x_, double y_, double z_, double radius_, double depth_, bool isSteering_) : Cylinder(x_, y_, z_, radius_, depth_) {
    isSteering = isSteering_;
}
Wheel::Wheel(double x_, double y_, double z_, double rotation_, double radius_, double depth_, bool isSteering_) : Cylinder(x_, y_, z_, rotation_, radius_, depth_) {
    isSteering = isSteering_;
}

Wheel::Wheel(ShapeInit shapeStruct) : Cylinder(shapeStruct) {
    isSteering = shapeStruct.params.cyl.isSteering;
}

ShapeInit Wheel::getServerModel() {
    ShapeInit shapeModel = Cylinder::getServerModel();

    shapeModel.params.cyl.isRolling = True;
    shapeModel.params.cyl.isSteering = isSteering;

    return shapeModel;
}
