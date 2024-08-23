#include<iostream>
using namespace std;
int main()
{
	int num ,cube, q , sum =0;
	int r;
	cout <<"Enter the number =";
	cin >>num;
	q = num;
	while (q!=0)
	{
	  r = q % 10;
	  cube =r*r*r;
	  sum =sum + cube ;
	  q = q /10;
}
    
    cout <<" sum  of digits =" <<sum <<endl;
    if (num ==1 sum)
       cout << "Equal";
       else
       cout << "Not";
	return 0;
}
