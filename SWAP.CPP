#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a,b,temp;

	cout<<"Enter the value of A:-";
	cin>>a;

	cout<<"Enter the value of B:-";
	cin>>b;

	temp=a;
	a=b;
	b=temp;

	cout<<"\nValue of a is:-"<<a;
	cout<<"\nvalue of b is:-"<<b;



	getch();
}
