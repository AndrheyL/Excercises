// Forloops Whileloops Factorial.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int userInput{};
    int sum{1};

    cout << "Enter a number too see its factorial" << endl;
    cin >> userInput;

    while (cin.fail())
    {
        cout << "Invalid input.\nPlease enter a input." << endl;
        cin.clear();
        cin.ignore(1000, '\n');
        cin >> userInput;
    }

    while (userInput > 0)
    {
        sum *= userInput;
        userInput--;
    }

    cout << sum;


    /*int y;
    int x = 0;
    cout << "Enter a number you want the table of: " << endl;
    cin >> y;
    while (cin.fail())
    {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Invalid command enter the number again: " << endl;
        cin >> y;
    }
    while (x <= 10)
    {
        cout << y << " x " << x << " = " << y * x << endl;
        x++;
    }
    return 0;*/

    /*int y;
    int a;
    cout << "Enter a number you want the table of: " << endl;
    cin >> y;
    cout << "Enter on what number the table should stop on: " << endl;
    cin >> a;
    while (cin.fail())
    {
        cout << "Invalid command enter the number again: " << endl;
        cin >> y;
    }
    for (int x = 0; x <= a; x++)
    {
        cout << y << " x " << x << " = " << y * x << endl;

    }

    return 0;
    }*/