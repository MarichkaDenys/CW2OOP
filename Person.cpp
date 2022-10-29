#include "Person.h"
Person::Person(string name, string surname, int age) :name(name), surname(surname), age(age)
{}

void Person::Print()
{
	cout << "Person: " << name << ' ' << surname << ' ' << age  << endl;
}
int Person::GetSalary()
{
	return 0;
}

int Person::GetAge()
{
	return age;
}