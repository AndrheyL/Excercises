// Lecture 14.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <array>
#include <algorithm>
using namespace std;


//int main()
//{
//    int i;
//    double x = 0, arr[10];
//    cout << "Enter total number of elements(1 to 10): \n";
//    for (i = 0; i < 10; ++i)
//    {
//        cout << "Enter Number " << i + 1 << " : ";
//        cin >> arr[i];
//
//        while (cin.fail())
//        {
//            cout << "Incorrect command, kindly enter the number again ";
//            cin.clear();
//            cin.ignore(1000, '\n');
//            cin >> arr[i];
//        }
//    }
//    x = arr[0];
//    for (i = 0;i < 10; i++)
//    {
//        if (x > arr[i])
//            x = arr[i];
//    }
//    cout << "Smallest element = " << x;
//
//    return 0;
//}

//int main()
//{
//    int i;
//    double x = 0, arr[10];
//    cout << "Enter total number of elements(1 to 10): \n";
//    for (i = 0; i < 10; i++)
//    {
//        cout << "Enter Number " << i + 1 << " : ";
//        cin >> arr[i];
//
//        while (cin.fail())
//        {
//            cout << "Incorrect command, kindly enter the number again ";
//            cin.clear();
//            cin.ignore(1000, '\n');
//            cin >> arr[i];
//        }
//    }
//
//    for (i = 0;i < 10; ++i)
//    {
//
//        if (x < arr[i])
//            x = arr[i];
//    }
//    cout << "Largest element = " << x;
//
//    return 0;
//}

//int main()
//{
//	int integers[10];
//	cout << "Enter numbers" << endl;
//	for (int i = 0; i < 5; i++)
//	{
//		cin >> integers[i];
//
//	}
//	cout << "Here are the numbers you inputted" << endl;
//	for (int j = 0; j < 5; j++)
//	{
//		cout << integers[j] << " ";
//	}
//}

//int main()
//{
//    int randomArray[1000];
//    int j = 0;
//    for (int x = 0; x < 1000; x++)
//    {
//        randomArray[x] = rand() % 100;
//        if (randomArray[x] == 6)
//        {
//            cout << randomArray[x] << endl;
//            j++;
//        }
//        else
//        {
//            continue;
//        }
//    }
//    cout << "Amount of 6's: " << j;
//
//}

//int main()
//{
//	int randomArry[ 10 ];
//	for (int i = 0; i < 10; i++)
//	{
//		randomArry[i] = rand() % 50;
//		cout << randomArry[i] << endl;
//	}
//}

//int main()
////{
////	array<int, 5> numbers = { 33, 5, 7, 99, 83 };
////	sort(numbers.begin(), numbers.end());
////	reverse(numbers.begin(), numbers.end());
////
////	for (int num : numbers)
////	{
////		cout << num << " ";
////	}
////}

//int main()
//{
//	array<int, 5> numbers = { 33, 5, 7, 99, 83 };
//	sort(numbers.begin(), numbers.end());
//	
//	for (int num : numbers)
//	{
//		cout << num << " ";
//	}
//}

//int main()
//{
//	array<string, 4> arr = { "Mars Bar", "Snickers", "Bounty", "Wispa" };
//	cout << arr.at(1) << endl;
//	cout << arr[1] << endl;
//
//	cout << arr.front() << endl;
//	cout << arr.back() << endl;
//
//	for (int i = 0; i < arr.size(); i++)
//	{
//		cout << arr.at(i) << ", ";
//	}
//	cout << endl;
//}

//int main()
//{
//    array<int, 5> myarray = { 9, 7, 5, 3, 1 };
//}