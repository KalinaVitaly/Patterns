#include "Transport.h"

Transport::Transport() 
	: currentOccupiedSeats(0),
	  driver(nullptr)
{
}

void Transport::SetDriverLisence(DriverLisence _driverLisence)
{
	driverLisence = _driverLisence;
}

void Transport::SetTransportMaxSeats(TransortMaxSeats _transportMaxSeats)
{
	transportMaxSeats = _transportMaxSeats;
}

void Transport::SetDriver(Driver* _driver)
{
	driver = _driver;
}

void Transport::SetPassenger(Passenger* _passenger)
{
	passengeers.push_back(_passenger);
}

bool Transport::CanSetDriver()
{
	return driver != nullptr;
}

bool Transport::CanSetPassenger()
{
	return currentOccupiedSeats < transportMaxSeats;
}
