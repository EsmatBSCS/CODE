#include<iostream>
using namespace std;
   long long factorial(int n)
   {
   	if (n==0 || n==1) 
   	{
   		return 1;
	   }
	   return n*factorial( n-1);
   }
   
    int main()
    {
    	int num=8;
    	cout << "factorial of" <<num  <<   factorial (num) << endl;
    	
    	return 0;
	}
   
