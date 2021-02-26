#include "Traid.h"
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

void Triad::setX(int value)
{
	x = value;
}
void Triad::setY(int value)
{
	y = value;
}
void Triad::setZ(int value)
{
	z = value;
}
bool Triad::Init(int x, int y, int z)
{
	setX(x);
	setY(y);
	setZ(z);
	return true;
}
void Triad::Display() const
{
	cout << endl;
	cout << "first = " << x << endl;
	cout << "second = " << y << endl;
	cout << "third = " << z << endl;
}
void Triad::Read()
{
	int x, y, z;
	cout << endl;
	cout << "first = ?"; cin >> x ;
	cout << "second = ?"; cin >> y ;
	cout << "third = ?"; cin >> z ;
	Init(x, y, z);
}
void Triad::add(int x1, int y1, int z1)
{
	x += x1;
	y += y1;
	z += z1;
}
void Triad::multiplay(int x1, int y1, int z1)
{
	x *= x1;
	y *= y1;
	z *= z1;
}
void Triad::equal()
{
	if (x == y && x == z && y == z && y == x && z== x && z == y)
		cout<< "check for equality was a success";
}
string Triad::toString()
{
	stringstream sout;

	sout << x << " + i * " << y << " + i * " << z << endl;

	return sout.str();
}