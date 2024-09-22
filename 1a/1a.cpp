#include <iostream>
using namespace std;

bool is_leap_year(unsigned int Y) {
    // Check if the year is a century year
    if (Y % 100 == 0) {
        // If it is a century year, it must be divisible by 400 to be a leap year
        return (Y % 400 == 0);
    } else {
        // If it is not a century year, it must be divisible by 4 to be a leap year
        return (Y % 4 == 0);
    }
}

int main() {
    unsigned int year;
    cout << "Enter a year: ";
    cin >> year;

    if (is_leap_year(year)) {
        cout << year << " is a leap year." << endl;
    } else {
        cout << year << " is not a leap year." << endl;
    }

    return 0;
}

