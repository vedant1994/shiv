//Write a C++ Program to compute the square of number series till 10.

#include <iostream>
using namespace std;

int main() {
    int i;
    
    // Print header
    cout << "Number\tSquare" << endl;
    
    // Compute and display the square of numbers from 1 to 10
    for (i = 1; i <= 10; ++i) {
        cout << i << "\t" << i * i << endl;
    }

    return 0;
}
