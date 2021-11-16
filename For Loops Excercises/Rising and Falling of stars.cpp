// Rising and Falling of stars.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = i; j >= 1; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = 1; i <= 4; i++)
    {
        for (int j = i; j <= 4; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
