#pragma once
#include <string>
class Student
{
public:
	int grade;
	std::string name;
	Student(int, std::string);
	Student(const Student &);
	~Student();
};