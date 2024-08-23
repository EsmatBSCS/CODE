#include <iostream>
using namespace std;  
       /*a program that inputs temperature from the using Celsius and converts it 
      into Fahrenheit using the formula F = 9/5 * C + 32.*/
      int main()
{
  float C,F;
  cout << "Enter temperature in Celsius\n"; 
  cin >> C;
   F = 9 / 5 * C  +32 ; 
  cout << "Temperature in Fahrenheit: " << F; 
  return 0;
}
