#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"Enter the code:  ";
	cin>>a;
	switch(a)
	{
		case 1:
			cout<<"2 GB";
			break;
		case 2:
			cout<<"4 GB";
			break;
		case 3:
			cout<<"16 GB";
			break;
		case 4:
			cout<<"32 GB";
			break;
		default:
		    cout<<"not mentioned";		
	}
	return 0;
}

