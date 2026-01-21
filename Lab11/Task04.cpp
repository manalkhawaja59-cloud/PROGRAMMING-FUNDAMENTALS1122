#include <iostream>
using namespace std;

int main() {
    // Initialize array
    int arr[] = {5, 10, 15, 20, 25};

    // Calculate length of array
    int length = sizeof(arr) / sizeof(arr[0]);

    // Display the length
    cout << "Length of the array is: " << length << endl;

    return 0;
}
