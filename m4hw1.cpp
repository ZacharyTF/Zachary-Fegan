/*
CSC 134
M4HW1 - Gold
Zachary Fegan
11/03/2025
*/

#include <iostream>
using namespace std;

int main() {
    int number;

    // GOLD: Input validation loop 
    do {
        cout << "Enter a number from 1 to 12: ";
        cin >> number;

        if (number < 1 || number > 12) {
            cout << "Invalid input. Please try again." << endl;
        }
    } while (number < 1 || number > 12);

    //SILVER + BRONZE: Times table loop
    int i = 1;
    while (i <= 12) {
        cout << number << " times " << i << " is " << number * i << "." << endl;
        i++;
    }
    
    return 0;
}