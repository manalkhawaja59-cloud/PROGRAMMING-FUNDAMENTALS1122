#include <iostream>
using namespace std;

int main() {
    // Initialize array
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    int sum = 0;
    float average;

    // Calculate sum
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    // Calculate average
    average = (float)sum / size;

    // Display results
    cout << "Sum of array elements: " << sum << endl;
    cout << "Average of array elements: " << average << endl;

    return 0;
}
