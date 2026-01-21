#include <iostream>
using namespace std;

int main() {
    // Outer loop for rows
    for (int i = 5; i >= 1; i--) {
        // Inner loop for stars
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl; // New line after each row
    }

    return 0;
}