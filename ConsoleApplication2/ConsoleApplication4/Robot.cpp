#include "Robot.h"
#include <iostream>
Robot::Robot() : Robot(5, 5)
{
}
Robot::Robot(int x, int y) : xpos_(x), ypos_(y), speed_(0), charge_(100.0)
{
}
void Robot::setName(const std::string& name)
{
	name_ = name;
}
void Robot::setPos(int x, int y)
{
	xpos_ = x;
	ypos_ = y;
}
double Robot::getCharge() const
{
	return charge_;
}
int Robot::getSpeed() const
{
	return speed_;
}
void Robot::moveLeft()
{
	xpos_ -= speed_;
	charge_ -= speed_ * 3;
}
void Robot::moveRight()
{
	xpos_ += speed_;
	charge_ -= speed_ * 3;
}
void Robot::accelerate()
{
	speed_++;
}
void Robot::slowDown()
{
	if (speed_ > 1)
		speed_--;
}
void Robot::printInfo() const
{
	std::cout << name_ << " : ";
	std::cout << "( " << xpos_ << "," << ypos_ << " ) ";
	std::cout << "CHARGE: " << charge_ << std::endl;
}
void Robot::serialize() const
{
	// ...здесь код для сохранения данных класса в файл...
}
void Robot::serialize(const std::string& filename) const
{
	
}
void Robot::deserialize()
{
	
}
void Robot::deserialize(const std::string& filename)
{
	
}