#pragma once

#include <string>
#include <ctime>

class Сonditioner
{
public:
	Conditioner(); // конструктор
	Conditioner(int x, int y); // конструктор с параметрами

	void setName(const std::string& name); // сеттеры
	void setPos(int x, int y);
	int getSpeed() const; // геттеры
	double getCharge() const;

private:
	std::string firm; 
	std::string model;
	int weight; 
	double temperature;
	std::string mode;
	std::time_t date;

};

