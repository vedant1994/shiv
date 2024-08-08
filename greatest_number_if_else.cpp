/* Write a C++ program to find greatest number between 3 number using if-else-if statements.*/

#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;

    // Prompt user to enter three numbers
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    // Find the greatest number using if-else-if statements
    if (num1 >= num2 && num1 >= num3) {
        cout << "The greatest number is " << num1 << endl;
    } else if (num2 >= num1 && num2 >= num3) {
        cout << "The greatest number is " << num2 << endl;
    } else {
        cout << "The greatest number is " << num3 << endl;
    }

    return 0;
}
