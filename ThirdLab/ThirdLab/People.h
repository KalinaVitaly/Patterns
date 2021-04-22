#pragma once

#include <cstdlib>
#include "Component.h"

class People : public Component
{
public:
	People(size_t _maxBaggageWeight);
	virtual ~People() = default;
public:
	void SetBaggge(size_t);
	size_t GetBaggageWeight() const override;
	bool IsComposite() const override;
private:
	size_t baggageWeight;
	size_t maxBaggageWeight;
};

