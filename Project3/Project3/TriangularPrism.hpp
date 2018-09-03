#ifndef MTRN3500_TRI_H
#define MTRN3500_TRI_H

class TriangularPrism : public Shape {
public:
	TriangularPrism(double x_, double y_, double z_, double a_length_, double b_length_, double depth_, double theta_);
	TriangularPrism(double x_, double y_, double z_, double rotation_, double a_length_, double b_length_, double depth_, double theta_);

	void draw();

	double getA_length();
	double getB_length();
	double get_depth();
	double get_theta();

	void setA_length(double a_length_);
	void setB_length(double b_length_);
	void set_depth(double depth_);
	void set_theta(double theta_);

private:
	double a_length;
	double b_length;
	double depth;
	double theta;
}

#endif
