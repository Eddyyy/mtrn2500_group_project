#ifndef MYVEHICLE_H
#define MYVEHICLE_H

#include "Vehicle.hpp"
#include "Messages.hpp"

class MyVehicle : public Vehicle {
private:

public:
	MyVehicle();
	~MyVehicle() = default;

	void draw();
	VehicleModel getServerModel();
};

#endif MYVEHICLE_H