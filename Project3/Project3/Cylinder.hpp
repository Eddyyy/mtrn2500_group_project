#ifndef CYLI_H
#define CYLI_H

#include "Shape.hpp"
#include "Messages.hpp"

class Cylinder : public Shape {

private:
	float radius;
	float depth;

public:
	Cylinder();
	Cylinder(double x_, double y_, double z_, double radius_, double depth_);
	Cylinder(double x_, double y_, double z_, double rotation_, double radius_, double depth_);
	Cylinder(ShapeInit shapeStruct);
	~Cylinder() = default;

	void draw();
	ShapeInit getServerModel();

	double get_radius();
	double get_depth();

	void set_radius(double radius_);
	void set_depth(double depth_);

};

#endif CYLI_H
