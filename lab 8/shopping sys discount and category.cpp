#include <iostream>
#include <iomanip>
using namespace std;
int main()
 {
    const double DISCOUNT_10 = 0.10;
    const double DISCOUNT_20 = 0.20;
    int cat;
    cout << "Select category:\n";
    cout << "1. Electronics\n2. Clothing\n3. Groceries\n";
    cout << "Choice: ";
     if (!(cin >> cat)) ;
	double price = 0;
    string item;

    switch (cat)
	 {
        case 1:
		 {
            int e;
            cout << "\nElectronics:\n1. Laptop ($1000)\n2. Smartphone ($700)\n3. Headphones ($150)\n";
            cout << "Select item: ";
            cin >> e;
            if (e == 1) { price = 1000; item = "Laptop"; }
            else if (e == 2) { price = 700; item = "Smartphone"; }
            else if (e == 3) { price = 150; item = "Headphones"; }
            else { cout << "Invalid item.\n"; return 0; }
            break;
        }
        case 2: {
            int c;
            cout << "\nClothing:\n1. Jacket ($120)\n2. T-shirt ($40)\n3. Jeans ($60)\n";
            cout << "Select item: ";
            cin >> c;
            if (c == 1) { price = 120; item = "Jacket"; }
            else if (c == 2) { price = 40; item = "T-shirt"; }
            else if (c == 3) { price = 60; item = "Jeans"; }
            else { cout << "Invalid item.\n"; return 0; }
            break;
        }
        case 3: {
            int g;
            cout << "\nGroceries:\n1. Milk ($2)\n2. Bread ($3)\n3. Eggs ($5)\n";
            cout << "Select item: ";
            cin >> g;
            if (g == 1) { price = 2; item = "Milk"; }
            else if (g == 2) { price = 3; item = "Bread"; }
            else if (g == 3) { price = 5; item = "Eggs"; }
            else { cout << "Invalid item.\n"; return 0; }
            break;
        }
        default:
            cout << "Invalid category.\n";
            return 0;
    }

    int qty;
    cout << "Quantity: ";
    cin >> qty;

    double total = price * qty;
    double discount = 0;
    if (total >= 100 && total <= 500) discount = DISCOUNT_10;
    else if (total > 500) discount = DISCOUNT_20;

    double payable = total * (1 - discount);

    cout << "\n=== Invoice ===" << '\n';
    cout << "Item: " << item << '\n';
    cout << "Unit price: $" << fixed << setprecision(2) << price << '\n';
    cout << "Quantity: " << qty << '\n';
    cout << "Subtotal: $" << total << '\n';
    cout << "Discount: " << (discount * 100) << "%\n";
    cout << "Total payable: $" << payable << '\n';
    return 0;
}



