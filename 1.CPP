#include<iostream.h>
#include<conio.h>
void main()
{
	int a[]={10,20,3,1,4,6,7,8,9},i,j;
	clrscr();
	for(i=0;i<9;i++)
	{
		cout<<a[i]<<"  ";
	}
	cout<<"sorting array :";
	for(i=0;i<9;i++)
	{
		for(j=i+1;j<9;j++)
		{
			if(a[i]>a[j])
			{
				int t=a[i];
				a[i]=a[j];
				a[j]=t;
			}

		}
	}

	cout<<"Display array emelents :"<<endl;
	for(i=0;i<9;i++)
		cout<<" "<<a[i];
	getch();

}