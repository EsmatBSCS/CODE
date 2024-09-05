 // a program that inputs temperature in Fahrenheit and convert it into Celsius.
 #include<iostream>
 using namespace std;
 int main()
 {
 	float fahrenheit , celsic ;
 	cout<<"Enter temp in fahrenheit:"<<endl;
 	cin>> fahrenheit;
 	celsic =   ( fahrenheit - 32 )  *5/9;
 	cout <<"Celsic:" <<celsic<<endl;
 	return 0;
 	
 }
