// Lab Problem 8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>
#include <cstdlib>

using namespace std;

int countVowel(string str);

int main()
{
    //Testing

    string input;

    cout << "Enter a string or Q to quit: ";
    cin >> input;
    cout << "Vowel Count: " << countVowel(input) << endl;
}

int countVowel(string str) {
    int strLen = str.size();
    int numVow = 0;
    char currentLetter;
    for (int i = 0; i < strLen; i++) {
        currentLetter = str[i];
        switch (currentLetter) {
        case 'A': numVow++;
            break;
        case 'a': numVow++;
            break;
        case 'E': numVow++;
            break;
        case 'e': numVow++;
            break;
        case 'I': numVow++;
            break;
        case 'i': numVow++;
            break;
        case 'O': numVow++;
            break;
        case 'o': numVow++;
            break;
        case 'U': numVow++;
            break;
        case 'u': numVow++;
            break;
        }
    }
    return numVow;
}