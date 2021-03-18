#include "Transport.h"

Transport::Transport(size_t _maxPlaces, size_t _occupiedPlaces)
	: maxPlaces(_maxPlaces),
	  occupiedPlaces(_occupiedPlaces),
	  driver(nullptr) {}

Transport::~Transport() = default;

bool Transport::isFullTransport() const
{
	return occupiedPlaces == maxPlaces;
}

bool Transport::hasDriver() const
{
	return driver != nullptr;
}

size_t Transport::getMaxPlaces() const
{
	return maxPlaces;
}

size_t Transport::getOccupiedPlaces() const
{
	return occupiedPlaces;
}

void Transport::setDriver(Driver * _driver)
{
	driver = _driver;
}

void Transport::setPassenger(Passenger* passenger)
{
	passengers.push_back(passenger);
	increamentOccupiedPlaces();
}

void Transport::increamentOccupiedPlaces()
{
	++occupiedPlaces;
}
