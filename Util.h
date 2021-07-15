#pragma once
#include "Customer.h"

void displayMenu() {
	std::cout << "**************************************************\n";
	std::cout << "*********  Welcome to the MARU's Hotel!  *********\n";
	std::cout << "**************************************************\n";
	std::cout << "******  Press w to drink a bottle of wine       **\n";
	std::cout << "******  Press e to drink a bottle of water      **\n";
	std::cout << "******  Press c to display the cost of the room **\n";
	std::cout << "******  Press d to display room's atributes     **\n";
	std::cout << "******  Press x to leave this menu              **\n";
	std::cout << "**************************************************\n";
}

void drink(HotelRoom* H1, short int n) {
	char op;
	bool drinks;
	do {
		op = 'a';
		drinks = H1->drink(n);
		if (drinks == 0)
		{
			op = 'n';
		}			
		while (op != 'y' && op != 'n') {
			std::cout << "Would you like one more? (y/n): ";
			std::cin >> op;
			if (op != 'y' && op != 'n')
				std::cout << "Invalid input!\n";
			if (op == 'n')
				std::cout << "Thank you!\n";
		}
	} while (op != 'n' && drinks != 0);	
	system("pause>0");
	system("cls");
}

void displayAtributes(HotelRoom* H1) {
	std::cout << "Reservation is: " << H1->getReservationStatus() << std::endl;
	std::cout << "Hotel Area is: " << H1->getArea() << " m2." << std::endl;
	std::cout << "This room has " << H1->getNumberOfBeds() << " beds." << std::endl;
	std::cout << "This room has " << H1->getNumberOfWindows() << " windows" << std::endl;
	std::cout << "Tv in the room: " << H1->hasTv() << std::endl;
	system("pause>0");
	system("cls");
}