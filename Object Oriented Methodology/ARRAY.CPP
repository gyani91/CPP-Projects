#include<iostream.h>
#include<conio.h>

class person
{
	char name[30];
	int age;

	public:
		void getdata(void);
		void putdata(void);
};

void person :: getdata(void)
{
	cout<<"\nEnter the name of the Student : ";
	cin>>name;
	cout<<"\nEnter the age : ";
	cin>>age;
}

void person :: putdata(void)
{
	cout<<"\nName : "<<name;
	cout<<"\nAge  : "<<age;
}

void main()
{
	int i;
	person stud[3];
	clrscr();

	for(i=0;i<3;i++)
		stud[i].getdata();

	for(i=0;i<3;i++)
		stud[i].putdata();
}