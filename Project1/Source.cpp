#include <iostream>
#include "Matrix.h"
#include <string>

using namespace std;

int main() {
	string s;
	Matrix first(3);
	for (int i = 0; i < 3; i++)
	{

		first.a[i] = '0';
		cout << first.a[i] << ' ';
		cout << endl;
	}
	Matrix second(first);

	for (int i = 0; i < 3; i++)
	{

		cout << second.a[i] << ' ';
		cout << endl;
	}

	system("pause");
	return 0;
}