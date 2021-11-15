// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include "Matrix.h"
#include "Vector.h"
using namespace std;
int main()
{
    const int LEN = 18;
    const int N = 9;
    const int M = 2;
    int* arr = new int[LEN];
    //Matrix makeArray2D(int* arr, int N, int M, int LEN);
    Vector* a = new Vector(18);
    Vector b = Vector(LEN);
    b.initializeArray(arr, LEN);
    b.printArray1D();
    a->initializeArray(arr, LEN);
    a->printArray1D();
    Matrix c = a->makeArray2D(arr, N, M, LEN);
    c.Print();
    a->~Vector();
    c.~Matrix();
}

