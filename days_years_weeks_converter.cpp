//Write a C++ Program to convert days into years and weeks

#include <iostream>
using namespace std;

int main() {
    int days, years, weeks, remainingDays;

    // Prompt user to enter the number of days
    cout << "Enter the number of days: ";
    cin >> days;

    // Calculate the number of years
    years = days / 365;
    // Calculate the remaining days after extracting years
    remainingDays = days % 365;
    // Calculate the number of weeks from the remaining days
    weeks = remainingDays / 7;
    // Calculate the remaining days after extracting weeks
    remainingDays = remainingDays % 7;

    // Display the results
    cout << days << " days are equivalent to " << years << " years, " << weeks << " weeks, and " << remainingDays << " days." << endl;

    return 0;
}
