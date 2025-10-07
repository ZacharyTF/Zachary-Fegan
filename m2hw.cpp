/*
CSC 134
M2HW1 - Gold
Zachary Fegan
10/06/2025
*/

#include <iostream>
#include <iomanip>  // for setprecision
#include <string>   // for string handling
#include <cstdlib>  // for randomizer
using namespace std;

int main() {
    cout << "M2HW1 - Gold Tier Assignment\n\n";

    // ---------------- Question 1 ----------------
    cout << "Question 1: Banking Transactions\n";

    string name;
    double startBalance, deposit, withdrawal;
    int accountNumber = rand() % 9000 + 1000; // random 4-digit number

    cout << "Enter your full name: ";
    getline(cin, name);

    cout << "Enter starting account balance: $";
    cin >> startBalance;
    cout << "Enter deposit amount: $";
    cin >> deposit;
    cout << "Enter withdrawal amount: $";
    cin >> withdrawal;

    double finalBalance = startBalance + deposit - withdrawal;

    cout << fixed << setprecision(2);
    cout << "\nName on account: " << name << endl;
    cout << "Account number: " << accountNumber << endl;
    cout << "Final balance: $" << finalBalance << endl;

    cout << "\n----------------------------------------\n";

    // ---------------- Question 2 ----------------
    cout << "Question 2: General Crates Storage Cost\n";

    double length, width, height;
    const double costPerCubicFoot = 0.3;
    const double chargePerCubicFoot = 0.52;

    cout << "Enter crate length (feet): ";
    cin >> length;
    cout << "Enter crate width (feet): ";
    cin >> width;
    cout << "Enter crate height (feet): ";
    cin >> height;

    double volume = length * width * height;
    double cost = volume * costPerCubicFoot;
    double charge = volume * chargePerCubicFoot;
    double profit = charge - cost;

    cout << fixed << setprecision(2);
    cout << "\nCrate volume: " << volume << " cubic feet\n";
    cout << "Cost to store: $" << cost << endl;
    cout << "Charge to customer: $" << charge << endl;
    cout << "Profit: $" << profit << endl;

    cout << "\n----------------------------------------\n";

    // ---------------- Question 3 ----------------
    cout << "Question 3: Pizza Party Leftovers\n";

    int pizzas, slicesPerPizza, visitors;
    const int slicesPerPerson = 3;

    cout << "Enter number of pizzas: ";
    cin >> pizzas;
    cout << "Enter slices per pizza: ";
    cin >> slicesPerPizza;
    cout << "Enter number of visitors: ";
    cin >> visitors;

    int totalSlices = pizzas * slicesPerPizza;
    int slicesNeeded = visitors * slicesPerPerson;
    int leftovers = totalSlices - slicesNeeded;

    cout << "\nTotal slices: " << totalSlices << endl;
    cout << "Slices needed: " << slicesNeeded << endl;
    cout << "Leftover slices: " << leftovers << endl;

    cout << "\n----------------------------------------\n";

    // ---------------- Question 4 ----------------
    cout << "Question 4: FTCC Cheer Program\n";

    string letsGo = "Let's go ";
    string school = "FTCC";
    string team = "Trojans";
    string cheerOne = letsGo + school;
    string cheerTwo = letsGo + team;

    cout << cheerOne << endl;
    cout << cheerOne << endl;
    cout << cheerOne << endl;
    cout << cheerTwo << endl;

    cout << "\n----------------------------------------\n";

    return 0;
}