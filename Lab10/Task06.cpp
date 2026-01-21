#include <iostream>
using namespace std;
int main()
 {
    int num;
    long long factorial = 1; // Use long long for large factorials

    // Ask user for input
    cout << "Enter a number: ";
    cin >> num;

    // Check if number is negative
    if (num < 0) 
	{
        cout << "Factorial of a negative number is not defined." << endl;
    } else 
	{
        // Calculate factorial using for loop
        for (int i = 1; i <= num; i++) 
		{
            factorial *= i;
        }
        cout << "Factorial of " << num << " is: " << factorial << endl;
    }

    return 0;
}
