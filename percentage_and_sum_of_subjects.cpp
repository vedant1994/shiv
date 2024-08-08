//count sum and percentage of subject

#include <iostream>
using namespace std;

int main() {
    float subject1, subject2, subject3, subject4, subject5, subject6;
    float sum, percentage;

    // Prompt user to enter marks for six subjects
    cout << "Enter the marks for six subjects:" << endl;

    cout << "Subject 1: ";
    cin >> subject1;

    cout << "Subject 2: ";
    cin >> subject2;

    cout << "Subject 3: ";
    cin >> subject3;

    cout << "Subject 4: ";
    cin >> subject4;

    cout << "Subject 5: ";
    cin >> subject5;

    cout << "Subject 6: ";
    cin >> subject6;

    // Calculate the sum of the marks
    sum = subject1 + subject2 + subject3 + subject4 + subject5 + subject6;

    // Calculate the percentage
    percentage = (sum / 600) * 100; // Assuming each subject is out of 100

    // Display the results
    cout << "Sum of the marks: " << sum << endl;
    cout << "Percentage: " << percentage << "%" << endl;

    return 0;
}
