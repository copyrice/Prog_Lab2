#include "Fraction.h"
#include <string>
#include <iostream>
#include <cstring>
#include <sstream>
#include <iomanip>
using namespace std;


Fraction::Fraction():
    num(0), den(0)
{
    ++s_id;
}



Fraction::Fraction(int num, int den)
{
    if (den == 0)
        throw runtime_error("zero division error");
    this->num = num;
    this->den = den;
    ++s_id;
}

Fraction::~Fraction()
{
    --s_al;
}

void Fraction::Print()
{
    cout << num << "/" << den << endl;
}

void Fraction::normalize() {

    if (num == 0 || den == 0) {
        num = 0;
        den = 1;
    }

    if (den < 0) {
        num *= -1;
        den *= -1;
    }

    int n = gcf(num, den);
    num = num / n;
    den = den / n;
}
int Fraction::get_num() 
{ 
    return num; 
}
int Fraction::get_den() 
{ 
    return den;
}

void Fraction::set(int n, int d) 
{
    num = n; den = d; normalize(); 
}

int Fraction::gcf(int a, int b) {
    if (a % b == 0)
        return abs(b);
    else
        return gcf(b, a % b);
}
int Fraction::lcm(int a, int b) {
    return (a / gcf(a, b)) * b;
}

/*Fraction Fraction::add(Fraction other) {
    Fraction fract;
    int lcd = lcm(den, other.den);
    int quot1 = lcd / den;
    int quot2 = lcd / other.den;
    fract.set(num * quot1 + other.num * quot2, lcd);
    fract.normalize();
    return fract;
}*/

Fraction operator*(const Fraction& f1, const Fraction& f2) {

    return Fraction(f1.num * f2.num, f1.den * f2.den);
}


Fraction operator + (const Fraction& f1, const Fraction& f2)
{
    return Fraction(f1.num * f2.den + f2.num * f1.den, f1.den * f2.den);
}

Fraction operator / (const Fraction& f1, const Fraction& f2)
{
    return Fraction(f1.num * f2.den, f1.den * f2.num);
}

Fraction operator - (const Fraction& f1, const Fraction& f2)
{
    return Fraction(f1.num * f2.den - f2.num * f1.den, f1.den * f2.den);
}

void Fraction::printAsFraction(double decimal_fraction)
{
    ostringstream out;
    out << decimal_fraction;
    string p = "";
    string d = "";
    string str = out.str();
    int index = strchr(str.c_str(), '.') - str.c_str();
   for (int i = 0; i< str.length(); i++)
    {

       if (i < index)p += str[i];
       else break;
          
    }  

   for(int i = index+1; i<str.length(); i++)
   {
       d += str[i];
   }
   int num2 = atoi(d.c_str());
   int digit=1;
   while((num2%digit)!=num2)
   {
       digit *= 10;
   }
   int num1 = digit;
   num1 = num2;
   num2 = digit;
   int x = gcf(num1, num2);
   num1 /= x;
   num2 /= x;
   cout << num1 << "/" << num2 << endl;
}
void Fraction::printAsFraction(char* decimal_fraction)
{
    ostringstream out;
    out << decimal_fraction;
    string p = "";
    string d = "";
    string str = out.str();
    int index = strchr(str.c_str(), '.') - str.c_str();
    for (int i = 0; i < str.length(); i++)
    {

        if (i < index)p += str[i];
        else break;

    }

    for (int i = index + 1; i < str.length(); i++)
    {
        d += str[i];
    }
    int num2 = atoi(d.c_str());
    int digit = 1;
    while ((num2 % digit) != num2)
    {
        digit *= 10;
    }
    int num1 = digit;
    num1 = num2;
    num2 = digit;
    int x = gcf(num1, num2);
    num1 /= x;
    num2 /= x;
    cout << num1 << "/" << num2 << endl;
}

/*void Fraction::reduce()
{
    int x = gcf(num, den);
    num = num / x;
    den = den / x;
} */


