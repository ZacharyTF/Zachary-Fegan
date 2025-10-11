/*
CSC 134
M3Lab2 - Number Letter Grade to letter conversion
Zachary Fegan
10/11/2025
*/

#include <iostream>
using namespace std;

int main() {

    int grade;

    //Prompt user for the numerical grade
    cout << "Enter your numerical grade (from 0 - 100): ";
    cin >> grade;

    // Validate input range
    if (grade < 0 || grade > 100) {
        cout << "Invalid input. Please enter a grade between 0 and 100." << endl;
    }
    else {
        // Determine letter grade using conditional statements
        if (grade >= 90 && grade <= 100) {
            cout << "Your letter grade is: A" << endl;
        }
        else if (grade >= 80 && grade <= 89) {
            cout << "Your letter grade is: B" << endl;
        }
        else if (grade >= 70 && grade <= 79) {
            cout << "Your letter grade is: C" << endl;
        }
        else if (grade >= 60 && grade <= 69) {
            cout << "Your letter grade is: D" << endl;
        }
        else {
            cout << "Your letter grade is: F" << endl;
        }
    }
    return 0;
}