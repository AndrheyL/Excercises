// Forloops Find the 9s.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    for (int i = 200; i >= 100; i--)
    {
        if (i % 9 == 0)
        {
            cout << i << endl;
        }
    }
}
