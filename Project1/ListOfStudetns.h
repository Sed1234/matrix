#pragma once
#include "Student.h"
#include <vector>
#include <iostream>

class ListOfStudetns
{
	std::vector<Student> students;
public:

	ListOfStudetns();
	~ListOfStudetns();
	void addStudent(int, std::string);
	void addDublicateStudent();
	void showStudents();
};

