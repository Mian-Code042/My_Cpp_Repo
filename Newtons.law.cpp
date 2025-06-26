#include <iostream>
#include <cmath>  

using namespace std;

int main() {
    double M1, M2, d;
    const double k = 6.67e-8;  
    cout << "Enter mass of first body (in grams): ";
    cin >> M1;
    cout << "Enter mass of second body (in grams): ";
    cin >> M2;
    cout << "Enter distance between the bodies (in centimeters): ";
    cin >> d;
    if (d == 0) {
        cout << "Distance between bodies cannot be zero." << endl;
        return 1;
    }
   double F = (k * M1 * M2) / pow(d, 2);
   cout << "The gravitational force between the bodies is: "
         << F << " dynes" << endl;

    return 0;
}
