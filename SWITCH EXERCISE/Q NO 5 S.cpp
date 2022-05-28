#include<iostream>
using namespace std;
int main()
{
	int a;
	char b;
	float d;
	cout<<"Enter the Temperature e.g(32 c) : ";
	cin>>a>>b;
	switch(b)
		{ case 'c':
			cout<<"You entered in Celcius \n";
			d= ((9.0 / 5.0) *( a + 32.0 ));
			cout<<"Temperature in Fahrenheit : "<<d;
		    break;
		  case 'f':
		    cout<<"You entered in Fahrenheit \n";
		    d=((5.0 / 9.0)*(a - 32.0));
		    cout<<"Temperature in Celcius : "<<d;
		    break;
		  default:
		    cout<<"Invalid Temperature";
		}
return 0;
}
