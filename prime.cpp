#include<iostream>
using namespace std;
int main()
{
	int i,num,count,max,min;
	cout<<"\n  Enter min values";
	cin >>min;
	cout<<"Enter max value";
	cin>>max;
	 num=min;
	 
	cout<<"Prime num between max and min: \n" <<endl;
	  while (num<=max) 
	  {
	  	count =0;
	  	i=2;
	  	while ( i<=num/2)
	  	{
	  		if (num%i==0)
	  		{
	  			count++;
	  			break;
			  }
			  i++;
		  }
		  if(count==0 && num !=1)
		  {
		  	cout<<"  "<<num ;
		  }
		  num++;
	  }
	  return 0;
}
	   

