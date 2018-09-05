#ifndef MTRN3500_TRAP_H
#define MTRN3500_TRAP_H

class TrapezoidalPrism : public Shape {
public:
	TrapezoidalPrism(double x_, double y_, double z_, double a_length_, double b_length_, double depth_, double height_, double a_offset_);
	TrapezoidalPrism(double x_, double y_, double z_, double rotation_, double a_length_, double b_length_, double depth_, double height_, double a_offset_);

	void draw();

	double getA_length();
	double getB_length();
	double get_depth();
	double get_height();
	double getA_offset();

	void setA_length(double a_length_);
	void setB_length(double b_length_);
	void set_depth(double depth_);
	void set_height(double height_);
	void setA_offset(double a_offset_);

private:
	double a_length;
	double b_length;
	double depth;
	double theta;
}

#endif
