#pragma once
#include <string>
class Robot
{
public:
	Robot(); // конструктор
	Robot(int x, int y); // конструктор с параметрами
	void setName(const std::string& name); // сеттеры
	void setPos(int x, int y);
	int getSpeed() const; // геттеры
	double getCharge() const;
	void moveLeft(); // переместиться влево
	void moveRight(); // переместиться вправо
	void accelerate(); // ускориться
	void slowDown(); // замедлиться
	// сериализация / десериализация:
	void serialize() const;
	void serialize(const std::string& filename) const;
	void deserialize();
	void deserialize(const std::string& filename);
	void printInfo() const; // вывод информации о себе
private:
	std::string name_; // имя робота
	int xpos_, ypos_; // координаты робота
	double charge_; // уровень заряда батареи
	int speed_; // скорость (на сколько передвигается за один шаг)
};