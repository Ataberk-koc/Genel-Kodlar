#include <iostream>
#include <math.h>
using namespace std;

class Denklem
{
	public : 
	int a,b,c;
	double x1,x2,delta;
	
	void hesapla(double a, double b, double c) //köklerin hesabi
		{
			delta=b*b-4*a*c;
			if(delta<0) cout<<"kök yok";
			else if(delta==0)
			{
				x1=-b/(2*a); cout<<"tek kok var"<<x1;
			}
			else
			{
				x1=(-b-sqrt(delta))/(2*a);
				x2=(-b+sqrt(delta))/(2*a);
			}
		}
};
int main()
{
	Denklem d;
	cout<<"a :"; cin>>d.a;
	cout<<"b :"; cin>>d.b;
	cout<<"c :"; cin>>d.c;
	d.hesapla(d.a,d.b,d.c);
	return 0;
}
