#include<iostream>
using namespace std;
int main()
    //a program that inputs 4 numbers and calculates the sum, average, and product of all the numbers
{
	int num1,num2,num3,num4;
	int sum,product;
	int avg;
	cout<<"Enter number 1"<<endl;
	cin>>num1;
	cout<<"Enter number 2"<<endl;
	cin>>num2;
	cout<<"Enter number 3"<<endl;
	cin>>num3;
	cout<<"Enter number 4"<<endl;
	cin>>num4;
	sum=num1+num2+num3+num4;
	avg=sum/4;
	product= num1*num2*num3*num4;
	cout<<"Sum:"<<sum<<endl;
	cout<<"Average:"<<avg<<endl;
	cout<<"Product:"<<product<<endl;
	return 0;
}
