#include<iostream.h>
#include<conio.h>

class shape
{
	public:
	void area(float r);
	void area(float l, float b);
	void area(double b, double h);
};

void shape :: area(float r)
{
	float area;

	area=3.14*r*r;

	cout<<"The area of the circle is "<<area;
}

void shape :: area(float l,float b)
{
	float area;

	area=l*b;

	cout<<"The area of the rectangle is "<<area;
}

void shape :: area(double b, double h)
{
	float area;

	area=b*h/2;

	cout<<"The area of the triangle is "<<area;
}

void main()
{
	shape n;
	float x,y;
	double a,b;
	clrscr();

	cout<<"Enter radius : ";
	cin>>x;

	n.area(x);

	cout<<"Enter length and breadth : ";
	cin>>x>>y;

	n.area(x,y);

	cout<<"Enter base and height : ";
	cin>>a>>b;

	n.area(a,b);
}