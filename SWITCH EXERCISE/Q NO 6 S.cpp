#include<iostream>
using namespace std;
int main()
{ 
  int a;
  float b;
  char c;
  cout<<"Enter two numbers : ";
  cin>>a>>b;
  cout<<"Select the word for operation: \n 'a' for additon\n 'm' for multipicaton\n 'd' for division : ";
  cin>>c;
  switch(c){
  	case 'a':
  	 cout<<"Additon : "<<(a+b);
     break;
  	case 'm':
  	 cout<<"Multipication : "<<(a*b);
  	 break;
  	case 'd':
  	 cout<<"DivisionW : "<<(a/b);
  	 break;
  	default:
  	 cout<<"Invalid command";
  		
  }
return 0;
}
