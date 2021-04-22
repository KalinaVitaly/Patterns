#include "People.h"

People::People(size_t _maxBaggageWeight)
{
	maxBaggageWeight = _maxBaggageWeight;
}

void People::SetBaggge(size_t _buggageWeight)
{
	baggageWeight = _buggageWeight;
}

size_t People::GetBaggageWeight() const
{
	return baggageWeight;
}

bool People::IsComposite() const
{
	return false;
}
