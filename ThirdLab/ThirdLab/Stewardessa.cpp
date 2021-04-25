#include "Stewardessa.h"

Stewardessa::Stewardessa() : People(storage::maxBaggageForWorkers) {}

void Stewardessa::ToString()
{
	std::cout << "Stewardessa has baggage: " << baggageWeight << std::endl;
}
