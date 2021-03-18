#pragma once

#include <vector>
#include <iostream>
#include <cassert>  
#include "Transport.h"
#include "Driver.h"
#include "Passenger.h"

class ElementsConteiner
{
public:
	~ElementsConteiner();

	void addTransport(Transport*);
	void addDriver(Driver*);
	void addPassenger(Passenger*);
	Transport* getTransport(size_t index) const;
	Driver* getDriver(size_t index) const;
	Passenger* getPassenger(size_t index) const;
	size_t getTransportSize() const;
	size_t getDriverSize() const;
	size_t getPassengertSize() const;
	void outputInfo() const;

private:
	std::vector<Transport*> transports;
	std::vector<Driver*> drivers;
	std::vector<Passenger*> passengers;
};

