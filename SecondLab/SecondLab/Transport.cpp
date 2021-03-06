#include "Transport.h"

Transport::Transport() 
	: currentOccupiedSeats(0),
	  driver(nullptr)
{
}

void Transport::SetTransportType(TransportType _transportType)
{
	transportType = _transportType;
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
	//passengeers.push_back(_passenger);
	++currentOccupiedSeats;
}

void Transport::SetChildSeats(bool _childSeats)
{
	childSeats = _childSeats;
}

bool Transport::CanSetDriver()
{
	return driver != nullptr;
}

bool Transport::CanSetPassenger()
{
	return currentOccupiedSeats < transportMaxSeats;
}
