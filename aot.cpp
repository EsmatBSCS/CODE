#include<iostream>
using namespace std;
int main()
   /*a program that inputs base height from the user and 
      calculates area of a triangle by using the formula Area = ½ * Base *Height.*/
{
	  
	int base,height,area;
	cout<<"Enter the base:"<<endl;
	cin>>base;
	cout<<"Enter the height:"<<endl;
	cin>>height;
	area=0.5*base*height;
	cout<<"area="<<area<<endl;
	return 0;
}
