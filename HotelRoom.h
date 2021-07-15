#pragma once
#include "MiniBar.h"
class HotelRoom {
private:
	double Area;
	bool Reserved;
	unsigned short numberOfBeds;
	unsigned short numberOfWindows;
	bool tv;
	MiniBar* bar = new MiniBar;
public:
	bool getReservationStatus()const;
	float getArea()const;
	unsigned short getNumberOfBeds()const;
	unsigned short getNumberOfWindows()const;
	bool hasTv()const;
	bool drink(unsigned short x);
	double getCost()const;
	HotelRoom();
	HotelRoom(unsigned short numOfBeds, unsigned short numOgWindows, double Area, bool tv);
	~HotelRoom();
};