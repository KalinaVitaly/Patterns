#pragma once

#include <cstdlib>
#include "Component.h"

class People : public Component
{
public:
	People(size_t _maxBaggageWeight);
	virtual ~People() = default;
public:
	void SetBagagge(size_t);
	bool IsComposite() const override;
	void ToString() override {};
	void OutputInformation() override;
	virtual size_t GetBaggageWeight() const override;
protected:
	size_t baggageWeight;
	size_t maxBaggageWeight;
};

