#include <iostream>

using namespace std;

int main()
{

    int number, power;

    cout << "Enter a number" << endl;

    cin >> number;

    cout << "Enter power" << endl;

    cin >> power;

    int temporaryAnswer = 1;

    for (int i = 1; i <= power; i++)
    {

        temporaryAnswer = temporaryAnswer * number;
    }

    cout << "Answer is " << temporaryAnswer << endl;

    return 0;
}