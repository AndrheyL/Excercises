// ForLoop Countdown.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    for (int x = 10; x >= 0; x--)
    {
        cout << x << endl;

        if (x == 0)
        {
            cout << "Lift Off!" << endl;
        }
    }
}

