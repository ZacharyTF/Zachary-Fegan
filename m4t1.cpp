/*
CSC 134
M4T1 - while loops
Zachary Fegan
10/22/2025
*/

#include <iostream>
using namespace std;

int main() {
    // === Program 5-3: Print "Hello" 5 times ===
    cout << "Program 5-3: Print \"Hello\" 5 times\n";
    int count = 0;
    while (count < 5) {
        cout << "Hello" << endl;
        count++;
    }

    cout << "\n"; // Spacer between programs

    // === Program 5-6: Table of numbers and their squares ===
    cout << "Program 5-6: Table of Numbers and Their Squares\n";
    int num = 1;
    cout << "Number\tSquare" << endl;
    cout << "-----------------" << endl;
    while (num <= 10) {
        cout << num << "\t" << num * num << endl;
        num++;
    }

    return 0;
}