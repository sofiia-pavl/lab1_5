#include "Vector3D.h"
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

void Vector3D::setVector(Triad value)
{
	vector = value;
}
void Vector3D::Init(Triad vector)
{
	setVector(vector);
}
void Vector3D::Display() const
{
	cout << endl;
	cout << "vector = " << endl;
	vector.Display();
}
void Vector3D::Read()
{
	Triad v;
	cout << endl;
	cout << "Vector = ?" << endl;
	v.Read();
	Init(v);
}
void Vector3D::addV()
{
	int a, b, c;
	cout << "x = "; cin >> a;
	cout << "y = "; cin >> b;
	cout << "z = "; cin >> c;
	vector.add(a, b, c);
}
void Vector3D::multiplayV()
{
	int a, b, c;
	cout << "x1 = "; cin >> a;
	cout << "y1 = "; cin >> b;
	cout << "z1 = "; cin >> c;
	vector.multiplay(a, b, c);
}
