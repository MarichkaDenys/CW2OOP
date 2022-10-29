#pragma once
#include "Person.h"
class Student :public Person
{
	string group;
	int course;
	int scholarship;
public:
	Student(string name = "", string surname = "", int age = 0,string group = "", int course = 0, int scholarship = 0);
	void Print();
	int GetSalary();
};