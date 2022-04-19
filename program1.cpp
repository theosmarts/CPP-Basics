#include <iostream>

using namespace std;

//Lambda function to get data types


auto getDataType = [] (auto myType) { 
string result = typeid(myType).name();
system(("echo " + result + " | c++filt -t").c_str());
};


int main() {

  //Declare automatic data types

  int myNumber = 12;



  auto dataType1 = "q";
  auto dataType2 = 12;
  auto dataType3 = "This is an introduction to C++";
  auto dataType4 = 32.67;
  auto dataType5 = true;


  string ss = typeid(dataType1).name();



  //cout << ss<<endl;

  //Programmatically determine the declared data types

  cout <<"Data Types: "<<endl;

  getDataType(dataType1);
  getDataType(dataType2);
  getDataType(dataType3);
  getDataType(dataType4);
  getDataType(dataType5);

  //Get size of data types

  cout <<"\nData Type Sizes:"<<endl;

  cout << sizeof(dataType1) <<endl;
  cout << sizeof(dataType2) <<endl;
  cout << sizeof(dataType3) <<endl;
  cout << sizeof(dataType4) <<endl;
  cout << sizeof(dataType5) <<endl;

  return 0;
}

