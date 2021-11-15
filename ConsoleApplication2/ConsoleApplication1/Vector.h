#pragma once
#include "Matrix.h"
using namespace std;
class Vector
{
public:
	Vector(const int length);
	//Vector(int* arr);
	~Vector();

	int& operator[](int index);
	void initializeArray(int* arr, int LEN);
	void printArray1D();
	Matrix makeArray2D(int* arr, int N, int M, int LEN);
private:
	const int LEN;
	int* arr = new int[LEN];
};

