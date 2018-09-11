#ifndef MYVEHICLE_H
#define MYVEHICLE_H

#include "Vehicle.hpp"
#include "Messages.hpp"

class MyVehicle : public Vehicle {
protected:
    double wheelAngle;

public:
	MyVehicle();
	MyVehicle(std::vector<ShapeInit> shapes_);
	~MyVehicle() = default;

	void draw();

    void update(double dt);
    void update(double speed_, double steering_, double dt);

	std::vector<ShapeInit> getVehicleServerModelVector();
};

#endif MYVEHICLE_H
