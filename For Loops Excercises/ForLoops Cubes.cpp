// ForLoops Cubes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int userInput;
    cout << "Enter a number between 1-5: ";
    cin >> userInput;

    for (userInput = userInput; userInput <= 5; userInput)
    {
        userInput = userInput * userInput * userInput;
        cout << userInput;
        return 0;
    }
    cout << "Invalid number!";
    return 0;
}
