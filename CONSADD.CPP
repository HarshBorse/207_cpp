//Program to demonstrate constructor
#include<iostream.h>
#include<conio.h>
class demo
{
  private:
	  int a,b,c;
  public:
	  demo(int x,int y);
	  void print();
	  void add();

};
demo::demo(int x,int y)
{
  a=x;
  b=y;
}
void demo::add()
{
  cout<<"Value of A is:-"<<a<<endl;
  cout<<"Vlue of B is:-"<<b<<endl;
  c=a+b;
}
void demo::print()
{
  cout<<"\n\n\n\nAddition of two Number is:-"<<c<<endl;
}
main()
{
  clrscr();
  demo d(10,20);
  d.add();
  d.print();

  getch();
}
