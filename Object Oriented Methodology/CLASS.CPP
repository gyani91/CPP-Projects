#include<iostream.h>
#include<conio.h>

class person
{
	char name[30];
	int i, age;

	public:
		void getdata(void);
		void putdata(void);
};

void person :: getdata(void)
{
	cout<<"\nEnter Name : ";
	cin>>name;
	cout<<"\nEnter Age : ";
	cin>>age;
}

void person :: putdata(void)
{
	cout<<endl<<"Name is "<<name;
	cout<<endl<<"Age is "<<age;
}

void main()
{
	int i;
	clrscr();
	person stud1, stud2;

	stud1.getdata();
	stud2.getdata();

	stud1.putdata();
	stud2.putdata();
}