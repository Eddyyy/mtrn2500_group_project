#ifndef MYVEHICLE_H
#define MYVEHICLE_H

#include "Vehicle.hpp"

class MyVehicle : public Vehicle {
private:

public:
	MyVehicle();
	~MyVehicle() = default;

	void draw();
};

#endif MYVEHICLE_H