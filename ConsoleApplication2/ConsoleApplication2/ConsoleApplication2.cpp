/*Написать класс Fraction для представления обыкновенных дробей (как отношения 
двух целых чисел x/y). Перегрузить операторы +, -, *, / для дробей. Реализовать метод 
void reduce() для сокращения дроби, а также статические методы:
 int gcd(int n, int m)
функция для нахождения наибольшего общего делителя чисел n и m;
 void printAsFraction(double decimal_fraction)
 void printAsFraction(char* decimal_fraction)
перегруженные методы вывода десятичной дроби в виде обыкновенной 
(например, при значении decimal_fraction = 0.43 на экране должно 
вывестись 43/100, при 0.25 – 1/4 и т.д.).
Также реализовать в виде статического члена класса счетчик всех созданных на 
данный момент в программе экземпляров дробей.
Продемонстрировать работу созданного класса. Создать несколько объектов дробей. 
Произвести операции сложения, вычитания, умножения и деления дробей. Вывести 
на экран результаты. Показать также результаты работы статических методов класса.
*/

#include <iostream>
#include <string>
#include "Fraction.h"

using namespace std;

int Fraction::s_id = 0;
int Fraction::s_al = 0;

int main()
{
    Fraction x(2, 3);
    Fraction y(6, 10);
    Fraction z = x + y;
    Fraction c = z * x;
    Fraction p = x - y;
    Fraction o = c / z;

    Fraction* obj = new Fraction(1, 2);
    x.Print();
    y.Print();
    z.Print();
    c.Print();
    p.Print();
    o.Print();
    obj->Print();

    cout << endl;

    int num1, num2;
    cout << "Enter num1:" << endl;
    cin >> num1;
    cout << "Enter num2:" << endl;
    cin >> num2;
    cout << "GCF for "<< num1 << ", " << num2 << ": " << Fraction::gcf(num1, num2) << endl;

    cout << endl;

    double number = 0.6;
    char s[100] = "0.43";
    Fraction::printAsFraction(number);
    Fraction::printAsFraction(s);
    cout << "Created: " << Fraction::s_id << endl;
    cout << "Alive: " << Fraction::s_al << endl;
    //Деструктор ~Fraction(), sl_al = 0;
}
