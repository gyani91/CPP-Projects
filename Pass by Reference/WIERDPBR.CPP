#include<iostream.h>

void foo(int &y);

void main()
{
	int x=5;

	cout << "x =" << x <<endl;
	foo(x);
	cout << "x =" << x <<endl;
}

void foo(int &y)
{
	cout << "y = " << y <<endl;
	y=6;
	cout << "y = " << y <<endl;
	y++;
}