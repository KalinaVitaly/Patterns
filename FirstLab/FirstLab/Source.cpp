#include <iostream>
#include "CreateElements.h"
#include "BusFactory.h"
#include "TaxiFactory.h"
#include "ElementsConteiner.h"

int main() {
	CreateElements createElements;
	BusFactory busFactory;
	TaxiFactory taxiFactory;

	ElementsConteiner* bus = createElements.create(busFactory);
	ElementsConteiner* taxi = createElements.create(taxiFactory);

	std::cout << "Bus information:" << std::endl;
	bus->outputInfo();
	std::cout << "Taxi information:" << std::endl;
	taxi->outputInfo();

	delete bus;
	delete taxi;

	return 1;
}