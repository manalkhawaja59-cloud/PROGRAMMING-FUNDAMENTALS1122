#include <iostream>
#include <cmath>
using namespace std;
int main()
 {
    int choice;
    const double PI = 3.14159;
    cout << "Select a shape:\n";
    cout << "1. Circle\n";
    cout << "2. Rectangle\n";
    cout << "3. Triangle\n";
    cout << "Enter your choice: ";
    cin >> choice;
    switch (choice) 
	{
        case 1: {
            double r;
            cout << "Enter radius of the circle: ";
            cin >> r;
            double area = PI * r * r;
            cout << "Area of the circle: " << area << "\n";
            break;
        }
        case 2: {
            double l, w;
            cout << "Enter length and width of the rectangle: ";
            cin >> l >> w;
            double area = l * w;
            cout << "Area of the rectangle: " << area << "\n";
            break;
        }
        case 3: {
            double b, h;
            cout << "Enter base and height of the triangle: ";
            cin >> b >> h;
            double area = 0.5 * b * h;
            cout << "Area of the triangle: " << area << "\n";
            break;
        }
        default:
            cout << "Invalid choice. Please select 1, 2, or 3.\n";
    }
}


