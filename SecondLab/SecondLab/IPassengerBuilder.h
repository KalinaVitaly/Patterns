#pragma once

#include "Passenger.h"

class IPassengerBuilder
{
public:
	IPassengerBuilder();
	virtual ~IPassengerBuilder() = default;
public:
	virtual void BuildPassengerTransportType() = 0;
	virtual void BuildPassengerCategoty() = 0;
public:
	Passenger* GetPassenger();
	void CreatePassenger();
protected:
	Passenger* passenger;
};

