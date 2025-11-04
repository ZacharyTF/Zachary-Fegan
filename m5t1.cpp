/*
 CSC 134
 M5T1 - Intro to Functions
 Zachary Fegan
 11/03/2025
*/
#include <iostream>
using namespace std;

// Function Prototypes
void say_hello();
int give_the_answer();
int double_a_number(int num);

int main() {
    cout << "Hello from main()" << endl;

    say_hello();  // Call void function

    int my_answer = give_the_answer();  // Call value-returning function
    cout << "The answer is: " << my_answer << endl;

    int twotimes = double_a_number(7);  // Call function with parameter
    cout << "Here's another number: " << twotimes << endl;

    return 0;
}
// Function Definitions
void say_hello() {
    cout << "Hi from say_hello()" << endl;
}

int give_the_answer() {
    return 42;
}

int double_a_number(int num) {
    return num * 2;
}