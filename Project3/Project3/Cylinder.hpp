#ifndef MTRN3500_CYLI_H
#define MTRN3500_CYLI_H

class Cylinder : public Shape {
public:
	Cylinder(double x_, double y_, double z_, double radius_, double depth_);
	Cylinder(double x_, double y_, double z_, double rotation_, double radius_, double depth_);
    ~Cylinder();

	void draw();

	double get_radius();
	double get_depth();

	void set_radius(double radius_);
	void set_depth(double depth_);

private:
	double radius;
	double depth;
    GLUquadric* gluQuadric;
}

#endif
