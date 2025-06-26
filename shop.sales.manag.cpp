#include <iostream>
using namespace std;

class productType {
private:
    string productName;
    int quantitiesInStock;
    double price;
    double discount; // in percentage, e.g., 10 means 10%

public:
    // a. Set function to initialize product details
    void set(string name, int quantity, double pr, double dis) {
        productName = name;
        quantitiesInStock = (quantity >= 0) ? quantity : 0;
        price = (pr >= 0) ? pr : 0.0;
        discount = (dis >= 0) ? dis : 0.0;
    }

    // b. Print function to display product details
    void print() const {
        cout << "Product Name: " << productName << endl;
        cout << "Quantity in Stock: " << quantitiesInStock << endl;
        cout << "Price: $" << price << endl;
        cout << "Discount: " << discount << "%" << endl;
    }

    // c. Set quantity in stock
    void setQuantitiesInStock(int quantity) {
        if (quantity >= 0)
            quantitiesInStock = quantity;
    }

    // d. Update quantity in stock
    void updateQuantitiesInStock(int addQuantity) {
        if (addQuantity >= 0)
            quantitiesInStock += addQuantity;
    }

    // e. Get quantity in stock
    int getQuantitiesInStock() const {
        return quantitiesInStock;
    }

    // f. Set price
    void setPrice(double pr) {
        if (pr >= 0)
            price = pr;
    }

    // g. Get price
    double getPrice() const {
        return price;
    }

    // h. Set discount
    void setDiscount(double dis) {
        if (dis >= 0)
            discount = dis;
    }

    // i. Get discount
    double getDiscount() const {
        return discount;
    }
};

int main() {
    productType product;

    // Setting product info
    product.set("Laptop", 10, 999.99, 15);

    // Display product info
    product.print();

    // Update quantity
    product.updateQuantitiesInStock(5);
    cout << "\nAfter updating stock:\n";
    product.print();

    // Set new price
    product.setPrice(899.99);
    product.setDiscount(20);
    cout << "\nAfter changing price and discount:\n";
    product.print();

    return 0;
}