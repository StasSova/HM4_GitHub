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


void main()
{
	cout << endl;
}