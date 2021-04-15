#include "BusBuilder.h"

BusBuilder::BusBuilder() : ITransportBuilder()
{
}

void BusBuilder::BuildTransportType()
{
	transport->SetTransportType(TransportType::Bus);
}

void BusBuilder::BuildMaxSeats()
{
	transport->SetTransportMaxSeats(TransortMaxSeats::BusSeats);
}
