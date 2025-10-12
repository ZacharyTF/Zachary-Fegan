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
    cout << "\nQuestion 2: Receipt Calculator" << endl;
    double mealPrice, mealTax, mealTotal;
    double mealTip = 0.0;
    int orderType;

    cout << "Enter the price of your meal: ";
    cin >> mealPrice;

    cout << "Enter 1 for dine-in, 2 for takeaway: ";
    cin >> orderType;

    mealTax = mealPrice * 0.07;
    if (orderType == 1) {
        mealTip = mealPrice * 0.15;
    }

    mealTotal = mealPrice + mealTax + mealTip;

    cout << "Receipt:" << endl;
    cout << "Meal: $" << mealPrice << endl;
    cout << "Tax: $" << mealTax << endl;
    cout << "Tip: $" << mealTip << endl;
    cout << "Total: $" << mealTotal << endl;
    // -------------------------------
    // Question 3: Choose Your Adventure
    // -------------------------------
    cout << "\nQuestion 3: Choose Your Own Adventure" << endl;
    string pathChoice, actionChoice;
    cout << "You're in a dark cave. Do you go 'left' or 'right'? ";
    cin >> pathChoice;

    if (pathChoice == "left") {
        cout << "You encounter a sleeping dragon. Do you 'sneak' or 'attack'? ";
        cin >> actionChoice;
        if (actionChoice == "sneak") {
            cout << "You tiptoe past the dragon and escape. Victory!" << endl;
        } else {
            cout << "The dragon wakes up and roasts you. Defeat!" << endl;
        }
    } else {
        cout << "You fall into a pit. Game over." << endl;
    }
    // -------------------------------
    // Question 4: Math Practice
    // -------------------------------
    cout << "\nQuestion 4: Math Practice" << endl;
    srand(time(0));
    int num1 = rand() % 10;
    
    return 0;
}