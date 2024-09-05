#include<iostream>
using namespace std;
void myfun1(int);
void myfun2(int&);
int main()
{
	int t=10,x=30;
	myfun1(t);
	cout<<t;
	myfun2(x);
	cout<<x;
}
void myfun1(int y)
{
	y=20;
	cout<<y;
}
void myfun2(int &y)
{
	y=20;
	cout<<y;
}

