//Write a C++ Program to enter salary and output income tax and net salary.

#include <iostream>

using namespace std;

int main() {
    double salary, tax, netSalary;

    // Prompt user to enter their salary
    cout << "Enter your salary: ";
    cin >> salary;

    // Calculate tax based on salary ranges (hypothetical tax brackets)
    if (salary <= 50000) {
        tax = salary * 0.05; // 5% tax for salary up to 50,000
    } else if (salary <= 100000) {
        tax = 50000 * 0.05 + (salary - 50000) * 0.10; // 10% tax for salary from 50,001 to 100,000
    } else if (salary <= 200000) {
        tax = 50000 * 0.05 + 50000 * 0.10 + (salary - 100000) * 0.15; // 15% tax for salary from 100,001 to 200,000
    } else {
        tax = 50000 * 0.05 + 50000 * 0.10 + 100000 * 0.15 + (salary - 200000) * 0.20; // 20% tax for salary above 200,000
    }

    // Calculate net salary
    netSalary = salary - tax;

    // Display tax and net salary
    cout << "Income Tax: " << tax << endl;
    cout << "Net Salary: " << netSalary << endl;

    return 0;
}
