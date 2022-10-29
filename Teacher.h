#pragma once
#include "Employee.h"
class Teacher :public Employee
{
	string university;
public:
	Teacher(string name = "", string surname = "", int age = 0, string position = "", int salary = 0, string university = "");
	void Print();
	int GetSalary();
};