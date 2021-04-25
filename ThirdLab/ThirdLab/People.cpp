#include "People.h"
#include <iostream>

People::People(size_t _maxBaggageWeight)
{
	maxBaggageWeight = _maxBaggageWeight;
	if (maxBaggageWeight)
	{
		SetBagagge(rand() % 56 + 5);
	}
}

void People::SetBagagge(size_t _buggageWeight)
{
	baggageWeight = _buggageWeight;
	std::cout << "Baggage set: " << baggageWeight << std::endl;
}

size_t People::GetBaggageWeight() const
{
	std::cout << baggageWeight << std::endl;
	return baggageWeight;
}

bool People::IsComposite() const
{
	return false;
}

void People::OutputInformation()
{
	//std::cout << "Contains in " << parent->
	ToString();
}
