/*
CSC 134
M5Lab1 - adventure story
Zachary Fegan
11/09/2025
*/
#include <iostream>
#include <string>
using namespace std;

// Function prototypes
void main_menu();
void explore_forest();
void enter_cave();
void rest_by_river();
void mysterious_echo();
void hidden_treasure();

int main() {
    main_menu();
    return 0;
}

// Main menu with input validation
void main_menu() {
    int choice;

    do {
        cout << "\n--- Welcome to the Forest Adventure ---\n";
        cout << "1. Explore the forest\n";
        cout << "2. Enter the cave\n";
        cout << "3. Rest by the river\n";
        cout << "4. Quit\n";
        cout << "Choose an option (1-4): ";
        cin >> choice;

        if (choice == 1) {
            explore_forest();
        } else if (choice == 2) {
            enter_cave();
        } else if (choice == 3) {
            rest_by_river();
        } else if (choice == 4) {
            cout << "Thanks for playing! Goodbye.\n";
        } else {
            cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 4);
}

// Story branch: Forest exploration
void explore_forest() {
    cout << "\nYou wander through tall trees and hear birds chirping.\n";
    cout << "Suddenly, you spot a narrow path leading deeper into the woods...\n";
    cout << "Do you want to follow it? (y/n): ";
    char follow;
    cin >> follow;

    if (follow == 'y' || follow == 'Y') {
        cout << "You follow the path and discover a hidden waterfall. It's peaceful here.\n";
    } else {
        cout << "You stay on the main trail and enjoy the calm forest breeze.\n";
    }
}

// Story branch: Entering the cave
void enter_cave() {
    cout << "\nYou step into a dark, damp cave. Your footsteps echo.\n";
    cout << "You hear a strange sound deeper inside...\n";
    cout << "1. Investigate the sound\n";
    cout << "2. Turn back\n";
    int cave_choice;
    cin >> cave_choice;

    if (cave_choice == 1) {
        mysterious_echo();
    } else {
        cout << "You decide it's safer to leave the cave for now.\n";
    }
}

// Nested branch: Echo in the cave
void mysterious_echo() {
    cout << "\nYou follow the echo and find a glowing crystal on the wall.\n";
    cout << "As you touch it, a hidden door opens revealing a treasure chest!\n";
    hidden_treasure();
}

// Story branch: Resting by the river
void rest_by_river() {
    cout << "\nYou sit by the river and listen to the flowing water.\n";
    cout << "You feel refreshed and ready to continue your journey.\n";
}

// Nested branch: Hidden treasure
void hidden_treasure() {
    cout << "\nInside the chest, you find ancient coins and a map to more adventures.\n";
    cout << "You smile, knowing this is just the beginning...\n";
}
