#include "ElementsConteiner.h"

ElementsConteiner::~ElementsConteiner()
{
	for (size_t i = 0; i < transports.size(); ++i)
		delete transports[i];

	for (size_t i = 0; i < drivers.size(); ++i)
		delete drivers[i];

	for (size_t i = 0; i < passengers.size(); ++i)
		delete passengers[i];
}

void ElementsConteiner::addTransport(Transport* _transport)
{
	transports.push_back(_transport);
}

void ElementsConteiner::addDriver(Driver* _driver)
{
	drivers.push_back(_driver);
}

void ElementsConteiner::addPassenger(Passenger* _passenger)
{
	passengers.push_back(_passenger);
}

Transport* ElementsConteiner::getTransport(size_t index) const
{
	assert(index >= 0 && index < transports.size());
	return transports[index];
}

Driver* ElementsConteiner::getDriver(size_t index) const
{
	assert(index >= 0 && index < drivers.size());
	return drivers[index];
}

Passenger* ElementsConteiner::getPassenger(size_t index) const
{
	assert(index >= 0 && index < passengers.size());
	return passengers[index];
}

size_t ElementsConteiner::getTransportSize() const
{
	return transports.size();
}

size_t ElementsConteiner::getDriverSize() const
{
	return drivers.size();
}

size_t ElementsConteiner::getPassengertSize() const
{
	return passengers.size();
}

void ElementsConteiner::outputInfo() const
{
	std::cout << "Passengers have: " << passengers.size() << std::endl
		      << "Transports have: " << transports.size() << std::endl
		      << "Driver have:     " << drivers.size() << std::endl;
}
