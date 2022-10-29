#pragma once
#include "Employee.h"
class Postgraduate : public Employee
{
	string faculty;
public:
	Postgraduate(string name = "", string surname = "", int age = 0, string position = "", int salary = 0, string faculty = "");
	void Print();
	int GetSalary();
};