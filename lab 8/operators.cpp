#include <iostream>
using namespace std;
int main() 
{
    double a, b;
    char op;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    switch (op) 
	{
        case '+':
		 cout << a << " + " << b << " = " << a + b;
	    break;
        case '-':
		 cout << a << " - " << b << " = " << a - b;
	    break;
        case '*':
		 cout << a << " * " << b << " = " << a * b;
	    break;
        case '/':
		 if (b != 0) cout << a << " / " << b << " = " << a / b;
                  else cout << "Error: Division by zero";
        break;
        default:
		  cout << "Error: Invalid operator";
    }

}
