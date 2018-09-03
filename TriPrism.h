#ifndef TRI_PRISM_H
#define TRI_PRISM_H
#endif TRI_PRISM_H

class TriPrism {

private:
	float a;
	float b;
	float t;
	float d;

public:
	TriPrism();
	TriPrism(float a_, float b_, float theta, float depth);
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