#include <iostream>
#include <string>

using namespace std;

//1232

//Check whether input from user is valid.

bool checkNumber(string str)
{
    for (int i = 0; i < str.length(); i++)

    // The isdigit(c) is a function in C which can be used to check if the passed character is a digit or not. 

        if (isdigit(str[i]) == false)

            return false;
    return true;
}

int main()
{

    //Declare 2 variables, userInput and number

    string userInput;
    int number;

    cout << "Please enter any number" << endl;
    cin >> userInput;

    if (checkNumber(userInput) == false)
    {
        cout << "Oops! That is not a valid number" << endl <<"Please enter a valid number"<< endl;
    }
    else
    {
        /*Since we now already know that the value inputed by the user is valid, 
        we convert it to a number*/

        number = stoi(userInput);

        //The stoi() function converts a string to an integer value.

        if (number < 0)
        {
            cout << "Number entered is negative" << endl;
        }
        else if (number == 0)
        {

            cout << "Number entered is Zero";
        }

        else
        {
            cout << "Number entered is positive" << endl;
        }
    }

    return 0;
}