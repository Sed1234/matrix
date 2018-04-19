#include <iostream>
#include "Matrix.h"
#include <string>
#include "Student.h"
#include "ListOfStudetns.h"

using namespace std;

int main() {
	ListOfStudetns myList;
	myList.addStudent(5, "Sed");
	myList.showStudents();
	system("pause");
	return 0;
}