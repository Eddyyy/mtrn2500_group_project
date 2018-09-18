
#ifndef WHEEL_H
#define WHEEL_H

#include "Shape.hpp"
#include "Cylinder.hpp"
#include "Vehicle.hpp"
#include "Messages.hpp"

class Wheel : public Cylinder {
public:
	Wheel();
	Wheel(double x_, double y_, double z_, double radius_, double depth_, bool isSteering_);
	Wheel(double x_, double y_, double z_, double rotation_, double radius_, double depth_, bool isSteering_);
    Wheel(ShapeInit shapeStruct);

    void draw();

    void setRotationAngle(double rotAngle);
    void setSteeringAngle(double angle);
    double getIsSteering();

    ShapeInit getServerModel();
private:
    double rotationAngle;
    double steeringAngle;
    bool isSteering;

    void draw_disk();
};

#endif WHEEL_H
