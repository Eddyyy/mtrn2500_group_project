#ifndef TRI_PRISM_H
#define TRI_PRISM_H

#include "Shape.hpp"

class TriPrism : public Shape {

private:
	float a_length;
	float b_length;
	float theta;
	float depth;

public:
	TriPrism();
	TriPrism(double x_, double y_, double z_, float a_length_, float b_length_, float theta_, float depth_);
	TriPrism(double x_, double y_, double z_, double rotation_, float a_length_, float b_length_, float theta_, float depth_);
	~TriPrism() = default;
	void Tri();
	void Tri1();
	void Tri2();
	void Tri3();
	void draw();
	/*double GetX();
	double GetY();
	double GetZ();
	void SetX(double xx);
	void SetY(double yy);
	void SetZ(double zz);*/
};

#endif TRI_PRISM_H