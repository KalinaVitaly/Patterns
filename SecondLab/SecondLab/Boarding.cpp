#include "Boarding.h"
#include <iostream>
#include <cmath>

Boarding::~Boarding()
{
	for (int i = 0; i < busPassenger.size(); ++i)
		delete busPassenger[i];
	
	for (int i = 0; i < taxiPassenger.size(); ++i)
		delete taxiPassenger[i];

	for (int i = 0; i < taxiDriver.size(); ++i)
		delete taxiDriver[i];

	for (int i = 0; i < busDriver.size(); ++i)
		delete busDriver[i];

	for (int i = 0; i < taxi.size(); ++i)
		delete taxi[i];

	for (int i = 0; i < bus.size(); ++i)
		delete bus[i];
}

void Boarding::CreatePassengers()
{
	PassengerBusBuilder busBuilder;
	PassengerTaxiBuilder taxiBuilder;
	TaxiBuilder taxiTransportBuilder;
	BusBuilder busTransportBuilder;
	DriverDirector directorDriver;
	TaxiDriverBuilder taxiDriverBuilder;
	BusDriverBuilder busDriverBuilder;
	PassengerDirector directorPassenger;
	TransportDirector directorTransport;
	int busPassengers;
	int taxiPassengers;

	std::cout << "Enter bus passengers count:\t";
	std::cin >> busPassengers;

	for (int i = 0; i < busPassengers; ++i)
	{
		busPassenger.push_back(directorPassenger.CreatePassegner(busBuilder));
	}

	std::cout << "Enter taxi passengers count:\t";
	std::cin >> taxiPassengers;

	for (int i = 0; i < taxiPassengers; ++i)
	{
		taxiPassenger.push_back(directorPassenger.CreatePassegner(taxiBuilder));
	}

	int busNeaded = std::ceil(static_cast<double>(busPassengers) / (30/*TransortMaxSeats::BusSeats*/));
	int taxiNeaded = std::ceil(static_cast<double>(taxiPassengers) / 4);

	for (int i = 0; i < busNeaded; ++i)
	{
		bus.push_back(directorTransport.CreateTransport(busTransportBuilder));
	}

	for (int i = 0; i < taxiNeaded; ++i)
	{
		taxi.push_back(directorTransport.CreateTransport(taxiTransportBuilder));
	}

	for (int i = 0; i < busNeaded; ++i)
	{
		busDriver.push_back(directorDriver.CreateDriver(busDriverBuilder));
	}

	for (int i = 0; i < taxiNeaded; ++i)
	{
		taxiDriver.push_back(directorDriver.CreateDriver(taxiDriverBuilder));
	}

	std::cout << "Bus passengers: " << busPassenger.size()
		<< " Bus drivers: " << busDriver.size()
		<< " buses: " << bus.size() << std::endl;
	std::cout << "Taxi passengers: " << taxiPassenger.size()
		<< " Taxi drivers: " << taxiDriver.size()
		<< " taxis: " << taxi.size() << std::endl;
}
