// Homework Programming Identifying Shapes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int noSides;
    int s1 = 1;
    int s2 = 2;
    int s3 = 3;
    int s4 = 4;
    int s5 = 5;
    int s6 = 6;
    int s7 = 7;
    int s8 = 8;
    int s9 = 9;
    int s10 = 10;

    std::cout << "How many sides does your shape have?\n";
    std::cin >> noSides;

    if (noSides == s1)
    {
        std::cout << "It has 1 side, therefore it is a circle...";
    }
    else if (noSides == s2)
    {
        std::cout << "It cannot be a shape if it is 2 sides";
    }
    else if (noSides == s3)
    {
        std::cout << "It is a Triangle!";
    }
    else if (noSides == s4)
    {
        std::cout << "It is a Square!";
    }
    else if (noSides == s5)
    {
        std::cout << "It is a Pentagon!";
    }
    else if (noSides == s6)
    {
        std::cout << "It is a Hexagon!";
    }
    else if (noSides == s7)
    {
        std::cout << "It is a Heptagon!";
    }
    else if (noSides == s8)
    {
        std::cout << "It is an Octagon!";
    }
    else if (noSides == s9)
    {
        std::cout << "It is a Nonagon!";
    }
    else if (noSides == s10)
    {
        std::cout << "It is a Decagon!";
    }
}
