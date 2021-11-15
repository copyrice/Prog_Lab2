#include "Matrix.h"
#include "Vector.h"
#include <cmath>
#include <iostream>
using namespace std;

Matrix::Matrix()
{
        N_ = M_ = 0;
        arr2D = nullptr;
}

Matrix& Matrix::operator ++ ()
{
    for (int i = 0; i < N_; i++)
    {
        for (int j = 0; j < M_; j++)
        {
            this->arr2D[i][j]++;
            return *this;

        }

    }
}
Matrix& Matrix::operator ++ (int value)
{
    Matrix c(*this);
    for (int i = 0; i < N_; i++)
    {
        for (int j = 0; j < M_; j++)
        {
            this->arr2D[i][j]++;
            return c;

        }

    }

}
Matrix& Matrix::operator -- ()
{
    for (int i = 0; i < N_; i++)
    {
        for (int j = 0; j < M_; j++)
        {
            this->arr2D[i][j]--;
            return *this;

        }

    }

}
Matrix& Matrix::operator --(int value)
{
    Matrix c(*this);
    for (int i = 0; i < N_; i++)
    {
        for (int j = 0; j < M_; j++)
        {
            this->arr2D[i][j]--;
            return c;

        }

    }
}

Matrix::Matrix(int** matr, int N, int M) :
    arr2D(matr), N_(N), M_(M)
{
}
/*Matrix::Matrix(int m, int n)
{
    M_ = m;
    N_ = n;

    // Выделить память для матрицы
    // Выделить пам'ять для массива указателей
    arr2D = (int**) new int * [M_]; // количество строк, количество указателей

    // Выделить память для каждого указателя
    for (int i = 0; i < M_; i++)
        arr2D[i] = (int*)new int[n];

    // заполнить массив M нулями
    for (int i = 0; i < M_; i++)
        for (int j = 0; j < N_; j++)
            arr2D[i][j] = 0;
} */


// Деструктор - освобождает память, выделенную для матрицы
Matrix::~Matrix()
{
    if (N_ > 0)
    {
        // освободить выделенную память для каждой строки
        for (int i = 0; i < M_; i++)
            delete[] arr2D[i];
    }

    if (M_ > 0)
        delete[] arr2D;
}

int Matrix::getAt(int i, int j) const 
{
    return arr2D[i][j];
}
void Matrix::setAt(int i, int j, int val)
{
    arr2D[i][j] = val;
}

void Matrix::Print()
{
    for (int i = 0; i < M_; i++)
    {
        for (int j = 0; j < N_; j++)
            cout << arr2D[i][j] << "\t";
        cout << endl;
    }
    cout << "---------------------" << endl << endl;
}