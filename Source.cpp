#include "Person.h"
#include "Employee.h"
#include "Student.h"
#include "Teacher.h"
#include "Postgraduate.h"

//#include <iostream>
//using namespace std;

void PrintAll(Person** persons, int count)
{
	for (int i = 0; i < count; i++)
	{
		persons[i]->Print();
	}
}

Person* SortPerson(Person** persons, int count)
{
	int temp;
	for (int i = 1; i < count - 1; i++)
	{
		for (int j = 1; j < count - i - 1; j++)
		{
			if (persons[j]->GetSalary() > persons[j+1]->GetSalary())
			{
				temp = persons[j]->GetSalary();
				persons[j]->GetSalary() = persons[j + 1]->GetSalary();
				persons[j + 1]->GetSalary() = temp;
			}

		}
		
	}
}

int main()
{
	Person person("name", "surname", 25);
	//person.Print();

	Student student("name", "surname", 17, "PmP-11", 1, 1988);
	//student.Print();
	
	Employee employee("name", "surname", 35, "plumber", 25000);
	//employee.Print();

	Teacher teacher("name", "surname", 27, "teacher", 8000, "LNU");
	//teacher.Print();
	
	Postgraduate postgraduate("name", "surname", 20, "junior", 2500, "Applied Mathematics");
	//postgraduate.Print();


	Person** all = new Person * [5]{ &person,&student,&employee,&teacher,&postgraduate};
	PrintAll(all, 5);
	
	 
	cout << "Sorted result:" << endl;
	SortPerson(all, 5)->Print();
	return 0;
}