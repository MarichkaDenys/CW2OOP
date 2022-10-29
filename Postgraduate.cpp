#include "Postgraduate.h"

Postgraduate::Postgraduate(string name, string surname, int age, string position, int salary, string faculty)
	:Employee(name, surname, age, position, salary), faculty(faculty)
{}

void Postgraduate::Print()
{
	cout << "Postgraduate: " << name << ' ' << surname << ' ' << age << ' ' << position << ' ' << salary <<
		' ' << faculty << endl;
}

int Postgraduate::GetSalary()
{
	return salary;
}