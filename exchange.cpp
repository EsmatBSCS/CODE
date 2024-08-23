#include<iostream>
using namespace std;
int main()
  //inputs two numbers and exchange their values the program should display the values before and after exchange.
  {
  	int  n1 ,n2 ,temp ;
  	cout<<"Enter first number:";
  	cin>>n1;
  	cout<<"Enter second number:";
  	cin>>n2;
  	temp = n1;
  	n1 = n2;
  	n2 =temp;
  	cout<<"number n1:"<<n1<<endl;
  	cout<<"number n2:"<<n2;
  	return 0;
  	
  }
