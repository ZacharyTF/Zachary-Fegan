/*
CSC 134
M3HW - Silver
Zachary Fegan
10/12/2025
*/

#include <iostream>
#include <ctime>
#include <cmath>
#include <cstdlib>
using namespace std;

int main() {
    // -------------------------------
    // Question 1: Simple Chat Bot
    // -------------------------------
    cout << "Question 1: Chat Bot" << endl;
    string userResponse;
    cout << "Hello, I'm a C++ program!" << endl;
    cout << "Do you like me? Please type yes or no." << endl;
    cin >> userResponse;

    if (userResponse == "yes") {
        cout << "That's great! I'm sure we'll get along." << endl;
    } else if (userResponse == "no") {
        cout << "Well, maybe you'll learn to like me later." << endl;
    } else {
        cout << "If you're not sure… that's OK." << endl;
    }

    // -------------------------------
    // Question 2: Receipt Calculator
    // -------------------------------
    
    // -------------------------------
    // Question 3: Choose Your Adventure
    // -------------------------------

    // -------------------------------
    // Question 4: Math Practice
    // -------------------------------

    return 0;
}