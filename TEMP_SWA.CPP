#include<iostream.h>
#include<conio.h>
template <class T>
void swap(T &x,T &y)
{
	T t;
	t=x;
	x=y;
	y=t;
}
void main()
{
	clrscr();

	char ch1,ch2;
	cout<<"\n Enter two charcter:->\n";
	cin>>ch1>>ch2;
	cout<<"\n*****************************************\n";

	cout<<"\n Before swapping:->\n";
	cout<<"\n ch1:  \t"<<ch1;
	cout<<"\n ch2:  \t"<<ch2;

	swap(ch1,ch2);

	cout<<"\n on swapping:->";
	cout<<"\n  ch1: \t"<<ch1;
	cout<<"\n ch2:   \t"<<ch2;

	cout<<"\n**************************************\n";

	int a,b;

	cout<<"\nEnter two integers:\n";
	cin>> a>>b;

	cout<<"\n*****************************************\n";
	cout<<"\n BEfore swapping:\n";
	cout<<"\n a: \t"<<a;
	cout<<"\n b: \t"<<b;

	swap(a,b);
	cout<<"\n on swapping:";
	cout<<"\n a: \t"<<a ;
	cout<<"\n b; \t"<<b;
	getch();
}


