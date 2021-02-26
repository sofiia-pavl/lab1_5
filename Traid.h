#pragma once
#include <string>
using namespace std;
class Triad
{
private:
	int x;
	int y;
	int z;
public:
	int getX() const { return x; }
	int getY() const { return y; }
	int getZ() const { return z; }

	void setX(int);
	void setY(int);
	void setZ(int);

	void add(int x1, int y1, int z1);
	void multiplay(int x1, int y1, int z1);
	void equal();

	bool Init(int x, int y, int z);
	void Display() const;
	void Read();
	string toString();
};

