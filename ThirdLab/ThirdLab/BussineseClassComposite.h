#pragma once
#include "Composite.h"
#include <iostream>

class BussineseClassComposite final : public Composite
{
public:
	BussineseClassComposite() = default;
	~BussineseClassComposite() override = default;
	void ToString() override;
};

