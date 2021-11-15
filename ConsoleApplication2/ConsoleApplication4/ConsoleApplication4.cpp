﻿// ConsoleApplication4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Robot.h"
int main()
{
    Robot r1(300, 400), r2, r3; // создаем трех роботов
    r2.setPos(150, 200);
    r1.setName("R2D2");
    r2.setName("C3PO");
    r3.setName("Sheldon");
    std::cout << "Before:" << std::endl;
    r1.printInfo();
    r2.printInfo();
    r3.printInfo();
    // ----------------------------------- имитация перемещений и ускорений роботов
    r1.accelerate();
    r1.moveRight();
    r2.moveRight();
    r3.moveRight();
    r1.accelerate();
    r2.accelerate();
    r1.moveRight();
    r2.moveRight();
    r3.moveRight();
    r1.accelerate();
    r1.moveRight();
    r2.moveRight();
    r3.moveRight();
    r2.accelerate();
    r2.accelerate();
    r1.moveRight();
    r2.moveRight();
    r3.moveRight();
    r3.accelerate();
    r1.moveRight();
    r2.moveRight();
    r3.moveRight();
    // ----------------------
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
