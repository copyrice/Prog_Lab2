#pragma once

#include <string>
#include <ctime>

class �onditioner
{
public:
	Conditioner(); // �����������
	Conditioner(int x, int y); // ����������� � �����������

	void setName(const std::string& name); // �������
	void setPos(int x, int y);
	int getSpeed() const; // �������
	double getCharge() const;

private:
	std::string firm; 
	std::string model;
	int weight; 
	double temperature;
	std::string mode;
	std::time_t date;

};

