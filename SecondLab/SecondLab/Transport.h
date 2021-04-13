#pragma once

#include <vector>
#include "Storage_Types.h"
#include "Driver.h"
#include "Passenger.h"

class Transport
{
public:
	Transport();
public:
	void SetDriverLisence(DriverLisence);
	void SetTransportMaxSeats(TransortMaxSeats);
	void SetDriver(Driver*);
	void SetPassenger(Passenger*);
public:
	bool CanSetDriver();
	bool CanSetPassenger();
private:
	Driver* driver;
	std::vector<Passenger*> passengeers;
	DriverLisence driverLisence;
	TransortMaxSeats transportMaxSeats;
	size_t currentOccupiedSeats;
};

