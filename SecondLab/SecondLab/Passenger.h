#pragma once

#include "Storage_Types.h"

class Passenger final
{
public:
	Passenger();
public:
	void SetPassengerType(PassengerType);
	void SetPassengerTransportType(PassengerTransportType);
private:
	PassengerType passengerType;
	PassengerTransportType passengerTransportType;
};

