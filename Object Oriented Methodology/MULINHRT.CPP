#include<iostream.h>
#include<conio.h>

class emp
{
	char name[30];
	int age;

	public:

	void getdata();
	void putdata();
};

void emp :: getdata(void)
{
	cout<<"Enter Name : ";
	cin>>name;

	cout<<"\nEnter Age : ";
	cin>>age;
}

void emp :: putdata(void)
{
	cout<<"\nName : "<<name;
	cout<<"\nAge : "<<age;
}

class dep : private emp
{
	public:
	char dname[9],services[10];

	void getdep();
	void putdep();
};

void dep :: getdep(void)
{
	getdata();
	cout<<"\nEnter Department : ";
	cin>>dname;

	cout<<"\nEnter Services : ";
	cin>>services;
}

void dep :: putdep(void)
{
	putdata();

	cout<<"\nDepartment : "<<dname;
	cout<<"\nServices : "<<services;
}

class bra : private dep
{
	char bname[15];
	public:
	void getbra(void);
	void putbra(void);
};

void bra :: getbra(void)
{
	getdep();

	cout<<"\nEnter the Branch : ";
	cin>>bname;
}

void bra :: putbra(void)
{
	putdep();

	cout<<"\nBranch : "<<bname;
}

void main()
{
	clrscr();
	bra ob1,ob2;

	ob1.getbra();
	ob2.getbra();

	ob1.putbra();
	ob2.putbra();
}