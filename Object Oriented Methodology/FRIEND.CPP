#include<iostream.h>
#include<conio.h>

class N;
class M
{
	public:

	int a;
	void geta(void)
	{
		cin>>a;
	}

	friend void grt(M,N);
};

class N
{
	public:
	int b;

	void getb(void)
	{
		cin>>b;
	}

	friend void get(M,N);
};

void grt(M clam, N clan)
{
	if(clam.a>clan.b)
		cout<<"Class M is greater";
	else
		cout<<"Class N is greater";

}

void main()
{
	clrscr();
	M ob1;
	ob1.geta();
	N ob2;
	ob2.getb();

	grt(ob1,ob2);

}