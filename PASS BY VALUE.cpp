#include<iostream>
using namespace std;
float CTF(float);
int main()
{ 
   float t=100;
   cout<<CTF(t);
} 
   float CTF(float c)
   {
   	 float F;
   	 F=(1.8*c)+32;
   	 return F;
   }
   
