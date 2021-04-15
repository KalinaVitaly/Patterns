#pragma once

#include <vector>
#include "BusDriverBuilder.h"
#include "TaxiDriverBuilder.h"
#include "TaxiBuilder.h"
#include "BusBuilder.h"
#include "PassengerBusBuilder.h"
#include "PassengerTaxiBuilder.h"
#include "Passenger.h"
#include "Driver.h"
#include "Transport.h"
#include "DriverDirector.h"
#include "PassengerDirector.h"
#include "TransportDirector.h"

class Boarding final
{
public:
	Boarding() = default;
	~Boarding();
public:
	void CreatePassengers();

private:
	std::vector<Passenger*> busPassenger;
	std::vector<Passenger*> taxiPassenger;
	std::vector<Driver*> taxiDriver;
	std::vector<Driver*> busDriver;
	std::vector<Transport*> taxi;
	std::vector<Transport*> bus;
};

