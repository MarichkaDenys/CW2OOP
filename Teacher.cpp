#include "Teacher.h"

Teacher::Teacher(string name, string surname, int age, string position, int salary, string university)
	:Employee(name, surname, age, position, salary), university(university)
{}

void Teacher::Print()
{
	cout << "Teacher: " << name << ' ' << surname << ' ' << age << ' ' << position << ' ' << salary <<
		' ' << university << endl;
}

int Teacher::GetSalary()
{
	return salary;
}