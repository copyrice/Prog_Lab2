#pragma once
#include <iostream>
#include <string>
class Fraction
{
public:
	Fraction();
	Fraction(int num, int den);
	~Fraction();
	void set(int n, int d);
	int get_num();
	int get_den();
	//Fraction add(Fraction other);
	static void printAsFraction(double decimal_fraction);
	static void printAsFraction(char* decimal_fraction);
	//Fraction mult(Fraction other);
	static int s_id;
	static int s_al;
	friend Fraction operator+ (const Fraction& f1, const Fraction& f2);
	friend Fraction operator* (const Fraction& f1, const Fraction& f2);
	friend Fraction operator/ (const Fraction& f1, const Fraction& f2);
	friend Fraction operator- (const Fraction& f1, const Fraction& f2);
	void normalize();
	void Print();
	static int gcf(int a, int b);
	int lcm(int a, int b);

private:
	int num, den;

protected:
	static int objects_created;
};

