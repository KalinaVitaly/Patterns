#pragma once
#include "Composite.h"
#include <iostream>

class EconomyClassComposite final : public Composite
{
public:
	EconomyClassComposite() = default;
	~EconomyClassComposite() override = default;
	void ToString() override;
};

