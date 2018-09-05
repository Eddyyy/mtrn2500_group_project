
#ifndef WHEEL_H
#define WHEEL_H

#include "Shape.hpp"
#include "Cylinder.hpp"
#include "Vehicle.hpp"

class Wheel : public Cylinder {
public:
	Cylinder *W = new Wheel();
	Wheel *wheel = dynamic_cast<Wheel*>(W);
private:
	double rotational_velocity;
	double steering;
};

#endif WHEEL_H