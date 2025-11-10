/*
CSC 134
M4Lab1 - loops
Zachary Fegan
11/09/2025
*/

#include <iostream>
#include <iomanip>  // for std::fixed and std::setprecision
#include <limits>   // for optional input validation
using namespace std;

// Function prototypes
double getLength();
double getWidth();
double getArea(double length, double width);
void displayData(double length, double width, double area);

// Optional input validation function
int get_choice(int size);

int main() {
    double length = getLength();
    double width = getWidth();
    double area = getArea(length, width);
    displayData(length, width, area);

    return 0;
}

// Function to get rectangle length
double getLength() {
    double length;
    cout << "Enter the length of the rectangle: ";
    cin >> length;

    while (cin.fail() || length <= 0) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Please enter a positive number for length: ";
        cin >> length;
    }

    return length;
}

// Function to get rectangle width
double getWidth() {
    double width;
    cout << "Enter the width of the rectangle: ";
    cin >> width;

    while (cin.fail() || width <= 0) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Please enter a positive number for width: ";
        cin >> width;
    }

    return width;
}

// Function to calculate area
double getArea(double length, double width) {
    return length * width;
}

// Function to display formatted output
void displayData(double length, double width, double area) {
    cout << fixed << setprecision(2);
    cout << "\n--- Rectangle Dimensions ---\n";
    cout << "Length: " << length << " units\n";
    cout << "Width : " << width << " units\n";
    cout << "Area  : " << area << " square units\n";
}

// Optional: input validation for menu choices
int get_choice(int size) {
    int choice = 0;
    while (choice < 1 || choice > size) {
        cout << "Choose (1-" << size << "): ";
        cin >> choice;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a number between 1 and " << size << ".\n";
        }
    }
    cout << "You picked option #" << choice << endl;
    return choice;
}