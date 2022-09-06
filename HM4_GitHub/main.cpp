#include <iostream>
using namespace std;

class Student
{
	char* name;
	int age;
	int number;
public:
	Student()
	{
		name = nullptr;
		age = 0;
		number = 0;
	}
	Student(const char* NewName, int Age, int Number)
	{
		name = new char[strlen(NewName) + 1];
		strcpy_s(name, strlen(NewName) + 1, NewName);

		age = Age;
		number = Number;
	}
};


void main()
{

}