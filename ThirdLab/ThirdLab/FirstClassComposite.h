#pragma once
#include "Composite.h"
#include <iostream>
class FirstClassComposite final : public Composite
{
public:
	FirstClassComposite() = default;
	~FirstClassComposite() override = default;
	void ToString() override;
};

