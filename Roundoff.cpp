#include <iostream>
#include <cmath> // for round()

using namespace std;

int main() {
    double decimalNumber;

    cout << "Enter a decimal number: ";
    cin >> decimalNumber;

    int roundedNumber = round(decimalNumber);

    cout << "Rounded number: " << roundedNumber << endl;

    return 0;
}
