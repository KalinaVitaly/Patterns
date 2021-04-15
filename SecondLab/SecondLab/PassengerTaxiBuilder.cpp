#include "PassengerTaxiBuilder.h"

PassengerTaxiBuilder::PassengerTaxiBuilder() : IPassengerBuilder()
{
}

void PassengerTaxiBuilder::BuildPassengerCategoty()
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

void PassengerTaxiBuilder::BuildPassengerTransportType()
{
	passenger->SetPassengerTransportType(PassengerTransportType::TaxiPassenger);
}
