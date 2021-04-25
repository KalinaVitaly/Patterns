#include "Pilot.h"

Pilot::Pilot() : People(storage::maxBaggageForWorkers) {}

void Pilot::ToString()
{
	std::cout << "Pilot has baggage: " << baggageWeight << std::endl;
}
