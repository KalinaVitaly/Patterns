#include "FirstClassPassengers.h"

FirstClassPassengers::FirstClassPassengers() : People(storage::maxBaggageFirstClass) 
{
	//baggageWeight = rand() % 56 + 5;
}

void FirstClassPassengers::ToString()
{
	std::cout << "FirstClassPassengers has baggage: " << baggageWeight << std::endl;
}
