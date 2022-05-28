#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	int a;
	cout<<"Enter the bondtype : ";
	cin>>a;
	switch(a)
	{
		case 1:
			char inData();
			char check(); 
			break;
		case 2:
			int dates();
			int leapYr(); 
			break;
		case 3:
			char yield();
			int maturity(); 
			break;
		case 4:
			int price();
			char roi(); 
			break;
		case 5:
			int files();
			int save(); 
			break;
		case 6:
	    	int retrieve();
		    int screen();
			break; 
		default:
		    cout<<"out"	;
	}
	return 0;
}
