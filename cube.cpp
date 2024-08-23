#include<iostream>
#define PI 3.1416
using namespace std;
int main()
    /*inputs radius from the user and calculates area and circumference of cube 
	using formula Area = 4?r2	Circumference = 4/3?r3.*/
{
	int r;
	int area ,circum ;
	cout<<"Enter the radius";
	cin>>r;
	area = 4 *PI *r *r;
	circum = 4/3 *PI *r*r*r;
	cout<<"Area of cube:"<<area;
	cout<<"Circumference of cube:"<<circum;
	return 0;
	}	
