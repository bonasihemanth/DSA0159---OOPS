#include<iostream>
using namespace std;
int main()
{
	int a,b,d,c,e;
	cout<<"\nenter the numbers:";
	cin>>a;
	cin>>b;
	cout<<"\n1.addition \n2.subtraction \n3.multiplication \n4.division:\n";
	cin>>c;
	switch(c)
	{
		case 1:
			d=a+b;
			cout<<"\naddition  =   "<<d;
			break;
		case 2:
			d=a-b;
			cout<<"\nsub  =   "<<d;
			break;
		case 3:
			d=a*b;
			cout<<"\nmul  =  "<<d;
			break;
		case 4:
		    d=a/b;
			cout<<"\ndivision =  "<<d;
			e=a%b;
			cout<<"\nreminder =  "<<e;
			break;
		default:
			cout<<"\nenter the valid operation";
	}
	return 0;
}