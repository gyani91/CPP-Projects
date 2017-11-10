#include<iostream.h>
#include<conio.h>

class student
{
	public:

	char name;
	int age;

	student(void)
	{
		name='s';
		age=21;
	}
	student(char s,int a)
	{
		name=s;
		age=a;
	}
	~student()
	{
	}
};

void main()
{
	char x;
	int age;
	clrscr();

	student s1, s2('m',20);

	cout<< "Default constructer : "<<s1.name<<s1.age;
	cout<<"\nParamaterialized contructor with constant values : ";
	cout<<s2.name<<s2.age;

	cout<<"Enter name and age : ";

	cin>>x;
	cin>>age;

	cout<<"\nParamaterialized contructor wtih user values : ";

	student s3(x,age);

	cout<<s3.name<<s3.age;

	cout<<"Copy constructor";

	student s4(s2);

	cout<<s4.name<<s4.age;

}