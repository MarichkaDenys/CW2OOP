#pragma once
#include "Person.h"
class Employee : public Person
{
protected:
	string position;
	int salary;
public:
	Employee(string name = "", string surname = "", int age = 0, string position = "", int salary = 0);
	void Print();
	int GetSalary();
};