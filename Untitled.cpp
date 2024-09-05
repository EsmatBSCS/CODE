#include <iostream>
#include <fstream>
using namespace std;
int main()
{//Declare and open a text file
   
  ofstream openFile("data.txt");
  char ch;
 
 //do until the end of file
 
while( ! openFile.eof() )
{
	
   openFile.get(ch); // get one character
   cout << ch;   // display the character
}

      openFile.close(); // close the file

     return 0;
}

