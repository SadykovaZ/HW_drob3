#pragma once
#include <iostream>
using namespace std;

class drob
{
	int x, y;
public:
	drob(int x = 0, int y = 1);
	void print() const;
	void setX(int x);
	void setY(int y);
	int getX() const { return x; }
	int getY() const { return y; }
	drob operator+=(const drob &d);
	drob operator-=(const drob &d);
	drob operator*=(const drob &d);
	drob operator/=(const drob &d);
	drob operator+(const drob &d);
	drob operator-(const drob &d);
	drob operator*(const drob &d);
	drob operator/(const drob &d);
	double getDrob() const
	{
		return (double)x / y;
	}
	drob& operator=(const drob&obj);

	drob& operator++();
	drob operator++(int);

};
drob operator+(const drob&a, const drob&b);
drob operator+(const drob&a, int number);
drob operator+(int number, const drob&a);

drob operator-(const drob&a, const drob&b);
drob operator-(const drob&a, int number);
drob operator-(int number, const drob&a);

drob operator*(const drob&a, const drob&b);
drob operator*(const drob&a, int number);
drob operator*(int number, const drob&a);

drob operator/(const drob&a, const drob&b);
drob operator/(const drob&a, int number);
drob operator/(int number, const drob&a);


bool operator> (const drob&a, const drob&b);
bool operator>(const drob&a, int number);
bool operator>(int number, const drob&b);

bool operator< (const drob&a, const drob&b);
bool operator<(const drob&a, int number);
bool operator<(int number, const drob&b);

bool operator>= (const drob&a, const drob&b);
bool operator<=(const drob&a, const drob&b);
bool operator==(const drob&a, const drob&b);
bool operator!=(const drob&a, const drob&b);
