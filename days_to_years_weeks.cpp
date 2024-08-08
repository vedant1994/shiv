#include <iostream>
using namespace std;

extern "C" {
    void convertDays(int days, int* years, int* weeks, int* remainingDays) {
        *years = days / 365;
        *remainingDays = days % 365;
        *weeks = *remainingDays / 7;
        *remainingDays = *remainingDays % 7;
    }
}
