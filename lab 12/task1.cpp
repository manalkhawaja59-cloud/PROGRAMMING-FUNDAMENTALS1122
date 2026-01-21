#include <iostream>
#include <cmath>  // Library for math functions
using namespace std;
int main()
 {
    double num;

    // Input from user
    cout << "Enter a number: ";
    cin >> num;

    // Using cmath library functions
    cout << "Square root: " << sqrt(num) << endl;      // sqrt() function
    cout << "Absolute value: " << fabs(num) << endl;   // fabs() for float/double
    cout << "Sine (in radians): " << sin(num) << endl; // sin() function
    cout << "Cosine (in radians): " << cos(num) << endl; // cos() function
    cout << "Cube (power of 3): " << pow(num, 3) << endl; // pow() function

    return 0;
}