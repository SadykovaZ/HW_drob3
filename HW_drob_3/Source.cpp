#include"drob_.h"
void main()
{
	setlocale(LC_ALL, "Rus");
	drob a(3, 2);
	drob b(5, 3);
	drob c;
	a+=1;
	a.print();
	cout << endl;
	b -= 1;
	b.print();
	cout << endl;
	drob d(4,3);
	cin >> d;
	cout << d;
	cout << endl;
	system("pause");
}