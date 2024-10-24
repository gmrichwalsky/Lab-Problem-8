// Lab Problem 8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>
#include <cstdlib>

using namespace std;

int countCharacter(string str);

int main()
{
    //Testing
    cout << countCharacter("ACBDEF");
}

int countCharacter(string str) {
    int strLen = str.length();
    return strLen;
}