#include <iostream>
using namespace std;

// Function to display the food menu
void displayMenu() {
    cout << "\n------ Menu ------\n";
    cout << "1. Burger      - Rs. 200\n";
    cout << "2. Pizza       - Rs. 500\n";
    cout << "3. Fries       - Rs. 100\n";
    cout << "4. Biryani     - Rs. 250\n";
    cout << "5. Cold Drink  - Rs. 80\n";
    cout << "6. Exit\n";
}

// Function to get price based on item choice
int getItemPrice(int choice) {
    switch (choice) {
        case 1: return 200;
        case 2: return 500;
        case 3: return 100;
        case 4: return 250;
        case 5: return 80;
        default: return 0;
    }
}

// Function to calculate total cost of item
int calculateItemTotal(int price, int quantity) {
    return price * quantity;
}

// Function to calculate final bill with 10% tax
float calculateFinalBill(float total) {
    float tax = total * 0.10;
    return total + tax;
}

int main() {
    int choice, quantity;
    float totalBill = 0;

    do {
        displayMenu();
        cout << "Enter your choice (1-6): ";
        cin >> choice;

        if (choice >= 1 && choice <= 5) {
        	int price = getItemPrice(choice);
            cout << "Enter quantity: ";
            cin >> quantity;

            int itemTotal = calculateItemTotal(price, quantity);
            totalBill += itemTotal;

            cout << "Item total: Rs. " << itemTotal << endl;
        } else if (choice != 6) {
            cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 6);

    if (totalBill > 0) {
        float finalAmount = calculateFinalBill(totalBill);
        cout << "\nSubtotal: Rs. " << totalBill;
        cout << "\nService Charge (10%): Rs. " << totalBill * 0.10;
        cout << "\nTotal Bill: Rs. " << finalAmount << endl;
    } else {
        cout << "No items ordered.\n";
    }

    cout << "\nThank you for visiting!\n";
    return 0;
}