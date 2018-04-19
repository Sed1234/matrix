#include <iostream>
#include "Matrix.h"
#include <string>
#include "Student.h"
#include "ListOfStudetns.h"

using namespace std;

int main() {
	ListOfStudetns myList;
	myList.addStudent(5, "Sed");
	myList.addStudent(6, "Ded");
	myList.addStudent(6, "Pop");
	myList.showStudents();
	std::vector<Student> result = myList.serchStudentsByName("Pop");
	for (int i = 0; i < result.size(); i++) {
		
		cout << result[i].grade << endl;
		
	}
	system("pause");
	return 0;
}