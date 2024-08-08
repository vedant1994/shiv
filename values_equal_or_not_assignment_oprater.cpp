/*Write a C++ program that will ask user to input two numbers and check whether values are 
equal or not using assignment operator*/

#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    // Prompt user to enter two numbers
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    // Check whether the two numbers are equal using the equality operator
    if (num1 == num2) {
        cout << "The values are equal." << endl;
    } else {
        cout << "The values are not equal." << endl;
    }

    return 0;
}
