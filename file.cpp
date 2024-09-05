#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream MyFile ("filename.txt");
	MyFile <<"files can be tricky ,but it is fun enough !";
	MyFile .close();
	string myText;

  // Read from the text file
  ifstream MyReadFile("filename.txt");

  // Use a while loop together with the getline() function to read the file line by line
  while (getline (MyReadFile, myText)) {
    // Output the text from the file
    cout << myText;
  }

  // Close the file
  MyReadFile.close();
}
	

