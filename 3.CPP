#include<iostream.h>
#include<conio.h>
class Abc
{
	int a,b,c;
	public:
		void addition(int a,int b)
		{
			a=a;
			b=b;
		       c=a+b;
			cout<<"Addition ="<<c;
		}

};
void main()
{
	clrscr();
	Abc a1;

	a1.addition(200,300);

	Abc a3;
	a3.addition(30,40);

	getch();

}