/*
 CSC 134
 M5T2 - More Practice with Functions
 Zachary Fegan
 11/03/2025
*/
#include <iostream>
using namespace std;

// Function Prototypes
int square(int num); // Value-returning function
void printAnswerLine(int num); // Void function

int main() {
    cout << "Listing numbers from 1 to 10 and their squares:" << endl;

    for (int i = 1; i <= 10; i++) {
        printAnswerLine(i);
    }

    return 0;
}

// Returns the square of the input number
int square(int num) {
    return num * num;
}

// Prints one line of the answer
void printAnswerLine(int num) {
    int result = square(num);
    cout << num << " squared is " << result << "." << endl;
}