#include <iostream>
using namespace std;
int main() 
{
    int N;
    // Ask user for the number of elements
    cout << "Enter the number of elements: ";
    cin >> N;
    int arr[N];
    // Input array elements
    cout << "Enter " << N << " integers:\n";
    for (int i = 0; i < N; i++)
	 {
        cin >> arr[i];
    }

    // Print array in reverse order
    cout << "Array in reverse order:\n";
    for (int i = N - 1; i >= 0; i--) 
	{
        cout << arr[i] << " ";
    }

    return 0;
}
