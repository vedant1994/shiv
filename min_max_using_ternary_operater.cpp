/*Write a C++ program to check minimum and maximum of two numbers using Ternary 
operator*/

#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    // Prompt user to enter two numbers
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    // Find the maximum of the two numbers using the ternary operator
    int max = (num1 > num2) ? num1 : num2;

    // Find the minimum of the two numbers using the ternary operator
    int min = (num1 < num2) ? num1 : num2;

    // Display the results
    cout << "The maximum number is: " << max << endl;
    cout << "The minimum number is: " << min << endl;

    return 0;
}
