#include <iostream>
#include "MiniBar.h"

void MiniBar::fillMiniBar(unsigned short bottlesWater, unsigned short bottlesWine) {
	this->TotalBottWater = bottlesWater;
	this->TotalBottWine = bottlesWine;
}
double MiniBar::getCost() {
	double costWater, costWine;
	std::cout << "Total bottles of water consumed: " << this->ConsumedBottWater << "($1 p/u) -> $";
	std::cout<< this->ConsumedBottWater * 1.0 << std::endl;
	std::cout << "Total bottles of wine consumed: " << this->ConsumedBottWine << "($2.3 p/u) -> $";
	std:: cout<< this->ConsumedBottWine * 2.3 <<std::endl;
	costWater = this->ConsumedBottWater * 1.0;
	costWine = this->ConsumedBottWine * 2.3;
	this->ConsumedBottWater = 0;
	this->ConsumedBottWine = 0;
	return costWater + costWine;
}

bool MiniBar::getWater() {
	if(this->TotalBottWater>0)
	{
		this->ConsumedBottWater += 1;
		this->TotalBottWater -= 1;
		std::cout << "Bottle of water consumed. Thank you!!! \n";
		return true;
	}
	else
	{
		std::cout << "Water is empty. Please contact with the Manager. Thank you!!! \n";
		return false;
	}
	
}

bool MiniBar::getWine() {
	if (this->TotalBottWine > 0)
	{
		this->ConsumedBottWine += 1;
		this->TotalBottWine -= 1;
		std::cout << "Bottle of wine consumed. Thank you!!! \n";
		return true;
	}
	else
	{
		std::cout << "Wine is empty. Please contact with the Manager. Thank you!!! \n";
		return false;
	}
	
}

MiniBar::MiniBar()
	: TotalBottWater(5), TotalBottWine(3), ConsumedBottWater(0), ConsumedBottWine(0)
{
	
}

MiniBar::~MiniBar() {
	std::cout << "Destructor invoqued...\n";
}
