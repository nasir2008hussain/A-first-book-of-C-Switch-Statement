#include<iostream>

using namespace std;

int main()
{
	char a;
	cout<<"Enter your mark : ";
	cin>>a;
	switch(a)
	{
		case 'A':
			cout<<"Mark is between 90-100";
			break;
		case 'B':
			cout<<"Mark is between 80-89.9";
			break;
		case 'C':
			cout<<"Mark is between 70-79.9";
			break;
		case 'D':
			cout<<"How you will esplain this ";
			break;
		default:
			cout<<"Professor fault\nI have nothing to do with mark";
		   
			
	}
	return 0;
}
