#include "EconomyClassPassenger.h"

EconomyClassPassenger::EconomyClassPassenger() : People(storage::maxBaggageEconomyClass) 
{
	//baggageWeight = rand() % 56 + 5;
}

void EconomyClassPassenger::ToString()
{
	std::cout << "EconomyClassPassengers has baggage: " << baggageWeight << std::endl;
}
