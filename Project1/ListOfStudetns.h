#pragma once
#include "Student.h"
#include <vector>
#include <iostream>

class ListOfStudetns
{
	//std::vector<Student> students;
public:
	std::vector<Student> students;
	ListOfStudetns();
	~ListOfStudetns();
	void addStudent(int, std::string);
	void addDublicateStudent();
	void showStudents();
	std::vector<Student> serchStudentsByName(std::string);
};

