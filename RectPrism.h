#ifndef RECT_PRISM_H
#define RECT_PRISM_H
#endif RECT_PRISM_H

class RectPrism {

private:
	float x1;
	float y1;
	float z1;

public:
	RectPrism();
	RectPrism(float x, float y, float z);
	~RectPrism() = default;
	void Rect1();
	void Rect2();
	void Rect3();
	void draw();
	/*double GetX();
	double GetY();
	double GetZ();
	void SetX(double xx);
	void SetY(double yy);
	void SetZ(double zz);*/
};