#include "Student.h"

Student::Student(string name, string surname, int age, string group, int course, int scholarship)
	:Person(name, surname, age), group(group), course(course), scholarship(scholarship) 
{}

void Student::Print()
{
	cout << "Student: " << this->name << ' ' << this->surname << ' ' << this->age << ' ' << this->group
		<< ' ' << this->course << ' ' << this->scholarship << endl;
}

int Student::GetSalary()
{
	return scholarship;
}