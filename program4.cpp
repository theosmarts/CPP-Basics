#include <iostream>
#include <string>
using namespace std;

int main() {

  struct {
    int myNum;
    string myString;
    int myArray [2];
  } myStructure;

  myStructure.myNum = 1;
  myStructure.myString = "Hello World!";
  myStructure.myArray[0] = 12;

  cout << myStructure.myNum << "\n";
  cout << myStructure.myString << "\n";
  cout << myStructure.myArray[0] << "\n";

  return 0;
}
