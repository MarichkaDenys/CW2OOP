#include "Employee.h"

Employee::Employee(string name, string surname, int age, string position, int salary)
	:Person(name, surname, age), position(position), salary(salary)
{}
void Employee::Print()
{
	cout << "Employee: " << name << ' ' << surname << ' ' << age << ' ' << position << ' ' << salary << endl;
}

int Employee::GetSalary()
{
	return salary;
}