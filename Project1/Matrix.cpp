#include "Matrix.h"



Matrix::Matrix(int n)
{
	this->n = n;
	a = new char [n];
	for (int i = 0; i < n; i++)
	{
		a[i] = '0';
	}
}

Matrix::Matrix(const Matrix & matrix)
{
	n = matrix.n;
	
	a = new char [n];
	for (int i = 0; i < n; i++)
	{
			a[i] = matrix.a[i];	
	}
}


Matrix::~Matrix()
{
	
	delete[] a;
}