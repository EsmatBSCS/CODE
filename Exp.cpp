#include <iostream>
using namespace std;
int main()
{
    int limit; 
     int number; 
    int sum; 
    int counter; 
    cout << " Enter the number of "<< "integers in the list: "; 
     cin >> limit; 
     cout << endl; 
     sum = 0; 
    counter = 0; 
    cout << " Enter " << limit<< " integers." << endl; 
      while (counter < limit) 
{
          cin >> number; 
         sum = sum + number; 
         counter++; 
}
      cout << " The sum of the " << limit<< " numbers = " << sum << endl; 
     if (counter != 0) 
     cout << "The average = "<< sum / counter << endl; 
     else 
       cout <<" No Input ";
       return 0;
}
