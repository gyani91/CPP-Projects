#include<iostream.h>
#include<conio.h>

class cal
{
	public:
		virtual void area()
		{
			float area,r;
			cout<<"Enter the radius : ";
			cin>>r;

			area=3.14*r*r;

			cout<<"The area of the circle is "<<area;
		}
};

class find : public cal
{
	public:
		void area()
		{
			float area,l,b;
			cout<<"Enter the length and breadth : ";
			cin>>l>>b;


			area=l*b;

			cout<<"The area of the rectangle is "<<area;
		}
};

class get : public find
{
	public:
		void area()
		{
			float area,b,h;
			cout<<"Enter the base and height : ";
			cin>>b>>h;

			area=b*h/2;

			cout<<"The area of the triangle is "<<area;
		}
};

void main()
{
	cal op1,*p;
	p=&op1;
	p->area();

	find op2;
	p=&op2;
	p->area();

	get op3;
	p=&op3;
	p->area();
}