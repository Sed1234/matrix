#include "Student.h"


Student::Student(int grade, std::string name)
{
	this->grade = grade;
	this->name = name;
}

Student::Student(const Student & last)
{
	this->grade = last.grade;
	this->name = last.name;
}

Student::~Student()
{
}