#include "BussineseClassPasseners.h"

BussineseClassPasseners::BussineseClassPasseners() : People(storage::maxBaggageBussinesClass) 
{
	//baggageWeight = rand() % 56 + 5;
}

void BussineseClassPasseners::ToString()
{
	std::cout << "BussineseClassPassengers has baggage: " << baggageWeight << std::endl;
}
