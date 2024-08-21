#include<iostream>
#define PI 3.1416
using namespace std;
int main()
  //Program to find area of circle
  {
 int  radius;
	int aoc,coc;
	cout<<"Enter the radius"<<endl;
	cin>>radius;
	aoc=   PI  *  radius * radius;
	coc= 2 * PI * radius;
	cout<<"Area of circle="<<aoc<<endl;
	cout<<"Circumference of circle="<<coc<<endl;
	return 0;
}
