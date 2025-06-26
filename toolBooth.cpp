#include <iostream>
using namespace std;

class TollBooth {
private:
    unsigned int totalCars;
    unsigned int nonPayingCars;
    float totalAmount;

public:
    TollBooth() {
        totalCars = 0;
        nonPayingCars = 0;
        totalAmount = 0;
    }

    void payingCar(float toll = 50.0) {
        totalCars++;
        totalAmount += toll;
    }

    void nonPayingCar() {
        totalCars++;
        nonPayingCars++;
    }

    void displayReport() {
        cout << "\n--- Toll Booth Report ---" << endl;
        cout << "Total Cars Passed: " << totalCars << endl;
        cout << "Non-Paying Cars: " << nonPayingCars << endl;
        cout << "Paying Cars: " << totalCars - nonPayingCars << endl;
        cout << "Total Amount Collected: $" << totalAmount << endl;
    }
};

int main() {
    TollBooth booth;
    int choice;

    do {
        cout << "\n1. Paying Car\n2. Non-Paying Car\n3. Show Report\n4. Exit\nEnter choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            booth.payingCar();
            break;
        case 2:
            booth.nonPayingCar();
            break;
        case 3:
            booth.displayReport();
            break;
        case 4:
            cout << "Exiting system...\n";
            break;
        default:
            cout << "Invalid choice.\n";
        }

    } while (choice != 4);

    return 0;
}
