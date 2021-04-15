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
	void SetTransportType(TransportType);
	void SetTransportMaxSeats(TransortMaxSeats);
	void SetDriver(Driver*);
	void SetPassenger(Passenger*);
	void SetChildSeats(bool);
public:
	bool CanSetDriver();
	bool CanSetPassenger();
private:
	Driver* driver;
	std::vector<Passenger*> passengeers;
	TransortMaxSeats transportMaxSeats;
	TransportType transportType;
	size_t currentOccupiedSeats;
	bool childSeats;
};

