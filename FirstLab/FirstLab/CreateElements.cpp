#include "CreateElements.h"

ElementsConteiner* CreateElements::create(IFactory& factory)
{
	ElementsConteiner* elements = new ElementsConteiner;
	size_t inputPassengers = 0;
	size_t indexTransport = 0;

	std::cout << "Enter number of passengers" << std::endl;
	std::cin >> inputPassengers;

	for (size_t i = 0; i < inputPassengers; ++i) {
		elements->addPassenger(factory.createPassenger());
	}

	while (inputPassengers) {
		if (!elements->getTransportSize() || 
			elements->getTransport(elements->getTransportSize() - 1)->isFullTransport()) {
			//create transport and driver
			elements->addTransport(factory.createTransport());
			elements->addDriver(factory.createDriver());
			//set for transport driver
			elements->getTransport(elements->getTransportSize() - 1)->setDriver(elements->getDriver(elements->getDriverSize() - 1));
		}

		//set passenger to transport
		elements->getTransport(elements->getTransportSize() - 1)->setPassenger(elements->getPassenger(inputPassengers - 1));

		--inputPassengers;
	}

	return elements;
}
