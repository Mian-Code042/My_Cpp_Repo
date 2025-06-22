#include <iostream>
using namespace std;

struct OrderItem {
    string flavor;
    string topping;
    int quantity;
    float pricePerScoop;
};

class IceCreamShop {
private:
    OrderItem order[10];
    int itemCount;
    float totalBill;

public:
    IceCreamShop() {
        itemCount = 0;
        totalBill = 0;
    }

    void addOrder(string flavor, string topping, int qty, float price) {
        order[itemCount].flavor = flavor;
        order[itemCount].topping = topping;
        order[itemCount].quantity = qty;
        order[itemCount].pricePerScoop = price;
        itemCount++;
    }

    void generateBill() {
        cout << "\n--- Ice Cream Receipt ---" << endl;
        for (int i = 0; i < itemCount; i++) {
            float itemTotal = order[i].quantity * order[i].pricePerScoop;
            totalBill += itemTotal;
            cout << i+1 << ". " << order[i].flavor << " with " << order[i].topping
                 << " x" << order[i].quantity << " = $" << itemTotal << endl;
        }

        if (totalBill > 500) {
            cout << "\nYou get a 10% discount for orders above $500!" << endl;
            totalBill *= 0.9;
        }

        cout << "\nTotal Amount: $" << totalBill << endl;
    }
};

int main() {
    IceCreamShop shop;
    int n;
    cout << "How many different ice creams you want to order? ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        string flavor, topping;
        int qty;
        float price;

        cout << "Enter flavor, topping, quantity and price per scoop: ";
        cin >> flavor >> topping >> qty >> price;

        shop.addOrder(flavor, topping, qty, price);
    }

    shop.generateBill();
    return 0;
}
