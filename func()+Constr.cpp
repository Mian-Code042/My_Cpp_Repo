
#include <iostream>
#include <cstring>  
#include <iomanip>  

using namespace std;

class SaleItem {
private:
    int id;
    char name[100]; // C-style string
    int quantity;
    double price;

public:
    // Default constructor
    SaleItem() {
        id = -999;
        strcpy(name, ""); // empty string
        quantity = -1;
        price = -1;
    }

    // Parameterized constructor
    SaleItem(int itemId, const char itemName[], int itemQuantity, double itemPrice) {
        id = itemId;
        strncpy(name, itemName, sizeof(name));
        name[sizeof(name) - 1] = '\0'; // Ensure null-termination
        quantity = itemQuantity;
        price = itemPrice;
    }

    // Copy constructor
    SaleItem(const SaleItem& other) {
        id = other.id;
        strncpy(name, other.name, sizeof(name));
        name[sizeof(name) - 1] = '\0';
        quantity = other.quantity;
        price = other.price;
    }

    // Function to decrement quantity
    bool decrementQuantity(int amount) {
        if (amount <= 0 || amount > quantity) {
            return false;
        }
        quantity -= amount;
        return true;
    }

    // Function to display item information
    void displayInformation() const {
        cout << "ID: " << id
             << ", Name: " << name
             << ", Quantity: " << quantity
             << ", Price: Rs. " << fixed << setprecision(2) << price
             << endl;
    }

    // Function to calculate total price for given quantity
    double calculateTotalPrice(int amount) const {
        return price * amount;
    }
};

// Example main function to test the class
int main() {

    SaleItem defaultItem;
    cout << "Default Item Info:\n";
    defaultItem.displayInformation();

    SaleItem milk(101, "Milk", 50, 150.0);
    cout << "\nOriginal Item Info:\n";
    milk.displayInformation();

    SaleItem copiedMilk = milk;
    cout << "\nCopied Item Info:\n";
    copiedMilk.displayInformation();

    if (milk.decrementQuantity(10)) {
        cout << "\nAfter selling 10 Milk packets:\n";
        milk.displayInformation();
    } else {
        cout << "\nInvalid quantity to decrement.\n";
    }

    if (!milk.decrementQuantity(100)) {
        cout << "\nAttempted invalid quantity decrement (greater than stock).\n";
    }

    cout << "\nTotal price for 5 Milk packets: Rs. "
         << fixed << setprecision(2)
         << milk.calculateTotalPrice(5) << endl;

    return 0;
}
