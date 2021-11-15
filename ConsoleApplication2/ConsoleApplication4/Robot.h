#pragma once
#include <string>
class Robot
{
public:
	Robot(); // �����������
	Robot(int x, int y); // ����������� � �����������
	void setName(const std::string& name); // �������
	void setPos(int x, int y);
	int getSpeed() const; // �������
	double getCharge() const;
	void moveLeft(); // ������������� �����
	void moveRight(); // ������������� ������
	void accelerate(); // ����������
	void slowDown(); // �����������
	// ������������ / ��������������:
	void serialize() const;
	void serialize(const std::string& filename) const;
	void deserialize();
	void deserialize(const std::string& filename);
	void printInfo() const; // ����� ���������� � ����
private:
	std::string name_; // ��� ������
	int xpos_, ypos_; // ���������� ������
	double charge_; // ������� ������ �������
	int speed_; // �������� (�� ������� ������������� �� ���� ���)
};