#include "ITransportBuilder.h"

ITransportBuilder::ITransportBuilder() : transport(nullptr)
{
}

void ITransportBuilder::BuildChildSeats()
{
	transport->SetChildSeats(true);
}

void ITransportBuilder::CreateTransport()
{
	transport = new Transport();
}

Transport* ITransportBuilder::GetTransport()
{
	return transport;
}
