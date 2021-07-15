#include <iostream>
#include "Customer.h"
#include "Util.h"

void Customer::menu() {
	char Option;
	double totalCost;
	do {
		displayMenu();
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
			totalCost = this->Hotel1->getCost();
			std::cout<< "The bill is for : $" << totalCost <<std::endl;
			system("pause>0");
			system("cls");
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
