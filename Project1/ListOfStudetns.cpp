#include "ListOfStudetns.h"
#include <vector>
#include "Student.h"


ListOfStudetns::ListOfStudetns()
{
}


ListOfStudetns::~ListOfStudetns()
{
}
void ListOfStudetns::addStudent(int grade, std::string name)
{
	students.push_back(Student(grade, name));
}
void ListOfStudetns::addDublicateStudent()
{
	students.push_back(students.back());
}
void ListOfStudetns::showStudents()
{
	for (Student s : students) {
		std::cout << "grade " << s.grade << ", name " << s.name << std::endl;
	}
}