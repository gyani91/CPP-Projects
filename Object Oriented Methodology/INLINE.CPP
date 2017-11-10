#include<conio.h>
#include<iostream.h>

inline void grt(int *);

void main()
{
	int a[5],i;

	for(i=0;i<5;i++)
		cin>>a[i];

	grt(a);
}

void grt(int *p)
{
	int large,i;
	large=p[0];
	for(i=0;i<5;i++)
		if(p[i]>large)
			large=p[i];
	cout<<large;
}