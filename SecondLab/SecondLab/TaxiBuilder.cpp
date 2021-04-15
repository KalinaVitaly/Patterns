#include "TaxiBuilder.h"

TaxiBuilder::TaxiBuilder() : ITransportBuilder()
{
}

void TaxiBuilder::BuildTransportType()
{
	transport->SetTransportType(TransportType::Taxi);
}

void TaxiBuilder::BuildMaxSeats()
{
	transport->SetTransportMaxSeats(TransortMaxSeats::TaxiSeats);
}

void TaxiBuilder::BuildChildSeats()
{
	transport->SetChildSeats(false);
}
