#include "Vector.h"
#include "Matrix.h"
#include <cmath>
#include <iostream>
using namespace std;
Vector::Vector(const int length):
    LEN(length)
{
}

int& Vector::operator[](int index)
{
	return arr[index];
}

void Vector::initializeArray(int* arr, int LEN)
{
    for (int i = 0; i < LEN; ++i)
    {
        *(arr + i) = int(pow(i, 2) + 1);
        if ((i + 1) % 2 == 0) *(arr + i) *= -1;
    }
}

void Vector::printArray1D()
{
    for (int i = 0; i < LEN; i++)
    {
        cout << *(arr + i) << " ";
    }
    cout << endl;
} 
/* Vector::printArray1D() // вывод массива
{
    for (int ix = 0; ix < LEN; ix++)
        cout << arr[ix] << " "; // вывод элементов массива на экран

    cout << endl; // новая строка
} */
Vector::~Vector() 
{
    delete[] arr; 
}

Matrix Vector::makeArray2D(int* arr, int N, int M, int LEN)
{
    int temp;
    for (int i = 0; i < LEN - 1; i++)
    {
        for (int j = i + 1; j < LEN; j++)
        {
            if (arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    int** arr2D = new int* [N]; // выделяем память под выходной массив
    for (int i = 0; i < N; ++i) // и еще под каждый ряд массива в отдельности
    {
        *(arr2D + i) = new int[M];
    }
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < M; ++j)
        {
            *(*(arr2D + i) + j) = *(arr + i * M + j);
        }
    }
    return Matrix(arr2D, 2, (LEN/2));
}