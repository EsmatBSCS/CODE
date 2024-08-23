#include<iostream>
using namespace std;
int main()
   // inputs a three digit number from the user and displays it in reverse order.
 {
 	int n, reversed_number = 0, remainder;

  cout << "Enter an integer: ";
  cin >> n;

   while(n != 0) 
  {
	  
    remainder = n % 10;
    reversed_number = reversed_number * 10 + remainder;
    n /= 10;
  }

  cout << "Reversed Number = " << reversed_number;

  return 0;
}
	 
