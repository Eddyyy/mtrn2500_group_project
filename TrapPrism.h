#ifndef TRAP_PRISM_H
#define TRAP_PRISM_H
#endif TRAP_PRISM_H

class TrapPrism {

private:
	float a;
	float b;
	float h;
	float d;
	float o;

public:
	TrapPrism();
	TrapPrism(float a_, float b_, float height, float depth, float offset);
	~TrapPrism() = default;
	void Trap();
	void Trap1();
	void Trap2();
	void Trap3();
	void Trap4();
	void draw();
	/*double GetX();
	double GetY();
	double GetZ();
	void SetX(double xx);
	void SetY(double yy);
	void SetZ(double zz);*/
};