#include<iostream.h>
#include<conio.h>

int a=30;

void main()
{
	int a=20;
	clrscr();
	{
		int a=10;
		cout<<a;
	}
	cout<<a;
	cout<<::a;
}