#ifndef MYVEHICLE_H
#define MYVEHICLE_H

#include "Vehicle.hpp"
#include "Messages.hpp"

class MyVehicle : public Vehicle {
private:

public:
	MyVehicle();
	MyVehicle(std::vector<ShapeInit> shapes_);
	~MyVehicle() = default;

	void draw();
	std::vector<ShapeInit> getVehicleServerModelVector();
};

#endif MYVEHICLE_H