#include"drob_.h"
drob::drob(int x, int y)
{
	this->x = x;
	setY(y);
}
void drob::print() const
{
	cout << x << " / " << y << " = " << (double)x / y;
}
void drob::setX(int x)
{
	this->x = x;
}
void drob::setY(int y)
{
	if (y != 0)
		this->y = y;
	else
		this->y = 1;
}
drob drob::operator+=(const drob &d)
{
	this->x = this->x*d.y + this->y*d.x;
	this->y = d.y*this->y;
	return *this;
}
drob drob::operator-=(const drob & d)
{
	this->x = this->x*d.y - this->y*d.x;
	this->y = d.y*this->y;
	return *this;
}
drob drob::operator*=(const drob & d)
{
	this->x = this->x*d.x;
	this->y = this->y*d.y;
	return *this;
}
drob drob::operator/=(const drob & d)
{
	this->x = this->x*d.y;
	this->y = this->y*d.x;
	return *this;
}
drob drob::operator+(const drob & d)
{
	drob res(this->x, this->y);
	res += d;
	this->x++;
	return res;
}
drob drob::operator-(const drob & d)
{
	drob res(this->x, this->y);
	res -= d;
	this->x--;
	return res;
}
drob drob::operator*(const drob & d)
{
	drob res(this->x, this->y);
	res *= d;
	this->x;
	return res;
}
drob drob::operator/(const drob & d)
{
	drob res(this->x, this->y);
	res /= d;
	this->x;
	return res;
}
drob & drob::operator=(const drob & obj)
{
	if (this == &obj) return *this;
	this->x = obj.x;
	this->y = obj.y;
	return *this;
}

drob & drob::operator++()
{
	this->x++;
	this->y++;
	return *this;
}
drob drob::operator++(int)
{
	drob tmp;
	tmp.x = this->x;
	tmp.y = this->y;
	this->x++;
	this->y++;
	return tmp;
}
drob operator+(const drob & a, const drob & b)
{
	drob res(a.getX(), a.getY());
	res += b;
	return res;
}
drob operator+(const drob & a, int number)
{
	drob res(a.getX(), a.getY());
	res += number;
	return res;
}
drob operator+(int number, const drob & a)
{
	drob res(number);
	res += (a.getX(), a.getY());
	return res;
}
drob operator-(const drob & a, const drob & b)
{
	drob res(a.getX(), a.getY());
	res -= b;
	return res;
}
drob operator-(const drob & a, int number)
{
	drob res(a.getX(), a.getY());
	res -= number;
	return res;
}
drob operator-(int number, const drob & a)
{
	drob res(number);
	res -= (a.getX(), a.getY());
	return res;
}
drob operator*(const drob & a, const drob & b)
{
	drob res(a.getX(), a.getY());
	res *= b;
	return res;
}
drob operator*(const drob & a, int number)
{
	drob res(a.getX(), a.getY());
	res *= number;
	return res;
}
drob operator*(int number, const drob & a)
{
	drob res(number);
	res *= (a.getX(), a.getY());
	return res;
}
drob operator/(const drob & a, const drob & b)
{
	drob res(a.getX(), a.getY());
	res /= b;
	return res;
}
drob operator/(const drob & a, int number)
{
	drob res(a.getX(), a.getY());
	res /= number;
	return res;
}
drob operator/(int number, const drob & a)
{
	drob res(number);
	res /= (a.getX(), a.getY());
	return res;
}
bool operator>(const drob & a, const drob & b)
{
	return a.getDrob() > b.getDrob();
}
bool operator>(const drob & a, int number)
{
	return a.getDrob() > number;
}
bool operator>(int number, const drob & b)
{
	return number > b.getDrob();
}
bool operator>=(const drob & a, const drob & b)
{
	return a.getDrob() >= b.getDrob();
}
bool operator<(const drob & a, const drob & b)
{
	return a.getDrob() < b.getDrob();
}

bool operator<(const drob & a, int number)
{
	return a.getDrob() < number;
}

bool operator<(int number, const drob & b)
{
	return number < b.getDrob();
}

bool operator<=(const drob & a, const drob & b)
{
	return a.getDrob() <= b.getDrob();
}

bool operator==(const drob & a, const drob & b)
{
	return a.getDrob() == b.getDrob();
}

bool operator!=(const drob & a, const drob & b)
{
	return a.getDrob() != b.getDrob();
}
