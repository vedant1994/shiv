/*Write a C++ program to check whether the integer entered by user is positive, negative or 
zero using nested if-else*/

#include <iostream>
using namespace std;

int main() {
    int number;

    // Prompt user to enter an integer
    cout << "Enter an integer: ";
    cin >> number;

    // Check if the number is positive, negative, or zero using nested if-else
    if (number >= 0) {
        if (number == 0) {
            cout << "The number is zero." << endl;
        } else {
            cout << "The number is positive." << endl;
        }
    } else {
        cout << "The number is negative." << endl;
    }

    return 0;
}
