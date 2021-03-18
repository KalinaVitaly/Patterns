#pragma once

#include <vector>
#include "Driver.h"
#include "Passenger.h"

class Transport
{
public:
	explicit Transport(size_t _maxPlaces, size_t _occupiedPlaces);
	virtual ~Transport();

	bool isFullTransport() const;
	bool hasDriver() const;
	size_t getMaxPlaces() const;
	size_t getOccupiedPlaces() const;
	void setDriver(Driver*);
	void setPassenger(Passenger*);

private:
	size_t maxPlaces;
	size_t occupiedPlaces;
	Driver* driver;
	std::vector<Passenger*> passengers;

protected:
	void increamentOccupiedPlaces();
};

