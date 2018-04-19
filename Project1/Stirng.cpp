#include "Stirng.h"



Stirng::Stirng(int n)
{
	this->n = n;
		a = new char[n];
	for (int i = 0; i < n; i++)
	{
		a[i] = '0';
	}
}


Stirng::~Stirng()
{
}
