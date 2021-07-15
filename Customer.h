#pragma once
#include "HotelRoom.h"

class Customer {
private:
	HotelRoom* Hotel1 = new HotelRoom;
public:
	void menu();
	Customer();
	~Customer();
};