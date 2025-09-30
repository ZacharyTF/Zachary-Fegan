/*
CSC 134
M3T2 - Random Numbers
Zachary Fegan
9/30/2025
*/

#include <iostream>
// used for pesudo-random numbers
#include <cmath>
// used for making it truely random
#include <ctime>
using namespace std;

int main() {
    cout << "Let's roll some dice!" << endl;
    int seed;
    cout << "What's your lucky number?  ";
    cin >> seed;
    // Seed the RNG
    srand(seed);

    const int MAX = 6; // numbers from 1 - 6
    int roll;
    roll = (rand() % MAX) + 1; // Divide by MAX, and just keep the remainder
    cout << "Your roll was: " << roll << endl;
    
    roll = (rand() % MAX) + 1; // Divide by MAX, and just keep the remainder
    cout << "Your roll was: " << roll << endl;

    roll = (rand() % MAX) + 1; // Divide by MAX, and just keep the remainder
    cout << "Your roll was: " << roll << endl;

    return 0;
}