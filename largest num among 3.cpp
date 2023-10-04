#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"enter the three numbers :";
	cin>>a;
	cin>>b;
	cin>>c;
	if (a>b && a>c)
	{
		cout<<"the largest number is "<<a;
	}
	else if (b>c && b>c)
	{
		cout<<"the largest number is "<<b;
	}
	else
	{
		cout<<"the largest number is  "<<c;
	}
}