#include <iostream>
#include<fstream>
using namespace std;
int main()
{  
   ofstream File("newdata.txt");
   File<<"This is my first C++ program";
   
   File.close();
}

