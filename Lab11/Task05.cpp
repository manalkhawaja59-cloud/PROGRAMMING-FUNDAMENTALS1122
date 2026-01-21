#include <iostream>
using namespace std;
int main() 
{
    int N;
    // Input array size
    cout << "Enter the number of elements: ";
    cin >> N;
    int arr[N];
    // Input array elements
    cout << "Enter " << N << " integers:\n";
    for (int i = 0; i < N; i++) 
	{
        cin >> arr[i];
    }

    // Assume first element is the largest
    int largest = arr[0];

    // Find the largest element
    for (int i = 1; i < N; i++) 
	{
        if (arr[i] > largest) 
		{
            largest = arr[i];
        }
    }

    // Display the result
    cout << "The largest number in the array is: " << largest << endl;

    return 0;
}
