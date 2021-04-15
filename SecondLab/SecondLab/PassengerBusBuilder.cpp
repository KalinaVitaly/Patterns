#include "PassengerBusBuilder.h"
#include <stdlib.h>

PassengerBusBuilder::PassengerBusBuilder() : IPassengerBuilder()
{
}

void PassengerBusBuilder::BuildPassengerCategoty()
{
	int random = rand() % 3;

	if (random == 0)
	{
		passenger->SetPassengerType(PassengerType::Adult);
	}
	else if (random == 1)
	{
		passenger->SetPassengerType(PassengerType::Beneficiary);
	}
	else if (random == 2)
	{
		passenger->SetPassengerType(PassengerType::Child);
	}
}

void PassengerBusBuilder::BuildPassengerTransportType()
{
	passenger->SetPassengerTransportType(PassengerTransportType::BusPassenger);
}
