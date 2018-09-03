#ifndef MTRN3500_RECT_H
#define MTRN3500_RECT_H

class RectangularPrism : public Shape {
public:
	RectangularPrism(double x_, double y_, double z_, double x_length_, double y_length_, double z_length_);
	RectangularPrism(double x_, double y_, double z_, double rotation_, double x_length_, double y_length_, double z_length_);

	void draw();

	double getX_length();
	double getY_length();
	double getZ_length();

	void setX_length(double x_length_);
	void setY_length(double y_length_);
	void setZ_length(double z_length_);
private:
	double x_length;
	double y_length;
	double z_length;
    void drawRectangle(double x_length, double y_length);
}

#endif
