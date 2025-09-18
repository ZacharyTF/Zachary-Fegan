/*
CSC 134
M2T1 - Apple Sales part 1
Zachary Fegan
9/18/2025

*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    // This program acts like a storefront.
    // Set up our variables
    string item_name = "Apples";
    string ufname; // Value to get the user's name
    string ulname;
    int number_of_items = 50;
    double cost_each = 0.99; // $0.99
    double total_cost;

    // Get the user's name
    cout << "Welcome, please enter your name: " << endl;
    cin >> ufname;
    cin >> ulname;

    // Greet the customer.
    cout << "Welcome, " << ufname + " " + ulname << " to the " << item_name << " store!" << endl;

    // Ask for the order
    // assume they'll buy everything
    cout << "We have " << number_of_items << " " << item_name << endl;
    cout << "Each costs $" << cost_each << endl;

    // Calculate the total price;
    total_cost = number_of_items * cost_each;
    // Output the results
    cout << "To purchase all " << number_of_items << " will cost $" << total_cost << " total." << endl;
    cout << "Thank you, " << ufname + " " + ulname << ", for shopping with us!" << endl;

    return 0; // no errors
}