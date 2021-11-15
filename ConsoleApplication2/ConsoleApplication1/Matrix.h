#pragma once
using namespace std;
class Matrix
{
public:
	Matrix();
	Matrix(int** matr, int N, int M);
	~Matrix();
	Matrix& operator ++ ();
    Matrix& operator ++ (int value);
    Matrix& operator -- ();
    Matrix& operator --(int value);

	int getAt(int i, int j) const;
	void setAt(int i, int j, int val);
	void Print();

private:
	int** arr2D;
	int N_;
	int M_;
};

