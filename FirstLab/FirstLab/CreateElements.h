#pragma once

#include "ElementsConteiner.h"
#include "IFactory.h"

#include <iostream>

class CreateElements
{
public:
	ElementsConteiner* create(IFactory&);

private:


};

