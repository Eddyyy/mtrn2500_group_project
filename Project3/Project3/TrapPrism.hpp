#ifndef TRAP_PRISM_H
#define TRAP_PRISM_H

#include "Shape.hpp"

class TrapPrism : public Shape {

private:
	float a_length;
	float b_length;
	float height;
	float depth;
	float a_offset;

public:
	TrapPrism();
	TrapPrism(double x_, double y_, double z_, float a_length_, float b_length_, float height_, float depth_, float a_offset_);
	TrapPrism(double x_, double y_, double z_, double rotation_, float a_length_, float b_length_, float height_, float depth_, float a_offset_);
	TrapPrism(ShapeInit shapeStruct);
	~TrapPrism() = default;
	void Trap();
	void Trap1();
	void Trap2();
	void Trap3();
	void Trap4();
	void draw();
	ShapeInit getServerModel();
	/*double GetX();
	double GetY();
	double GetZ();
	void SetX(double xx);
	void SetY(double yy);
	void SetZ(double zz);*/
};

#endif TRAP_PRISM_H
