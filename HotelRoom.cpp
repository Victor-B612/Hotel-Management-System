#include <iostream>
#include "HotelRoom.h"

bool HotelRoom::getReservationStatus()const {
	if (this->Reserved)
		return true;
	else
		return false;
}
float HotelRoom::getArea()const {
	return this->Area;
}

unsigned short HotelRoom::getNumberOfBeds()const {
	return this->numberOfBeds;
}

unsigned short HotelRoom::getNumberOfWindows()const {
	return this->numberOfWindows;
}

bool HotelRoom::hasTv()const {
	return this->tv;
}

bool HotelRoom::drink(unsigned short x) {
	switch (x) {
	case 1:
		return bar->getWater();
		break;
	case 2:
		return bar->getWine();
		break;
	default:
		std::cout << "Invalid input!\n";
	}
}

double HotelRoom::getCost()const {
	return (bar->getCost() + (this->Area * 15.0) + (this->numberOfBeds * 14.32));
}

HotelRoom::HotelRoom()
	: Area(rand()), Reserved(0), numberOfBeds(rand() % 2 + 1), numberOfWindows(rand() % 5 + 1), tv(rand() % 2)
{

}

HotelRoom::HotelRoom(unsigned short numOfBeds, unsigned short numOfWindows, double Area, bool tv) 
	:Reserved(0)
{
	this->Area = Area;
	this->tv = tv;
	this->numberOfBeds = numOfBeds;
	this->numberOfWindows = numOfWindows;
}

HotelRoom::~HotelRoom() {
	delete bar;
	bar = NULL;
	std::cout << "pointer bar destroyed...\n";
}
