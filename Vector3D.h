#pragma once
#include "Traid.h"

using namespace std;

class Vector3D
{
private:
	Triad vector;
public:
	Triad getVector() const { return vector; }
	void setVector(Triad);

	void addV();
	void multiplayV();

	void Init(Triad vector);
	void Display() const;
	void Read();
};

