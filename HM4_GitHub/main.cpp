#include <iostream>
using namespace std;

class Car
{
	char* model;
public:
	Car()
	{
		model = nullptr;
	}
};

class Point
{
	int x, y, z;
public:
	Point()
	{
		x = y = z = 0;
	}
	Point(int Nx, int Ny, int Nz)
	{
		x = Nx;
		y = Ny;
		z = Nz;
	}
};

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
	cout << endl;
	cout <<"Привет"<< endl;

	
}