#pragma once
class MiniBar {
private:
	int TotalBottWater;
	int ConsumedBottWater;
	int TotalBottWine;
	int ConsumedBottWine;
public:
	void fillMiniBar(unsigned short bottlesWater, unsigned short bottlesWine);
	double getCost();
	bool getWater();
	bool getWine();
	MiniBar();
	~MiniBar();
};