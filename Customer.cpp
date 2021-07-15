#include <iostream>
#include "Customer.h"
#include "Util.h"

void Customer::menu() {
	char Option;
	displayMenu();
	do {
		std::cout << "Select an option, please: ";
		std::cin >> Option;
		switch (Option) {
		case 'w':
			drink(this->Hotel1, 2);
			break;
		case 'e':
			drink(this->Hotel1, 1);
			break;
		case 'c':
			std::cout<<this->Hotel1->getCost()<<std::endl;
			break;
		case 'd':
			displayAtributes(this->Hotel1);
			break;
		case 'x':
			std::cout << "Come back soon!!!\n";
			break;
		default:
			std::cout << "Invalid option!\n";
			break;
		}
	} while (Option != 'x');
}

Customer::Customer() {
}

Customer::~Customer() {
	delete Hotel1;
	Hotel1 = NULL;
	std::cout << "Hotel pointer destroyed...\n";
}