//area of circle

#include <iostream>
#include <cmath> // For M_PI constant

using namespace std;

int main() {
    double radius, area;

    // Prompt user to enter the radius of the circle
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    // Calculate the area of the circle
    area = M_PI * radius * radius;

    // Display the result
    cout << "The area of the circle with radius " << radius << " is: " << area << endl;

    return 0;
}

