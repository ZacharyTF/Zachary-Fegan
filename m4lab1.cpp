/*
CSC 134
M4Lab1 - loops
Zachary Fegan
10/22/2025
*/

#include <iostream>
using namespace std;

int main() {
    int height, width;

    // Ask the user for dimensions
    cout << "Enter the height of the block: ";
    cin >> height;
    cout << "Enter the width of the block: ";
    cin >> width;

    // Outer loop for each row (height)
    for (int i = 0; i < height; i++) {
        // Inner loop for each column (width)
        for (int j = 0; j < width; j++) {
            cout << "* ";
        }
        // Move to the next line after printing one row
        cout << endl;
    }

    return 0;
}