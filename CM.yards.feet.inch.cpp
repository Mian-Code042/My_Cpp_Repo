#include <iostream>
#include <cmath>       // for round()
using namespace std;

int main() {
    double cm;
    const double CM_PER_INCH = 2.54;

    cout << "Enter length in centimeters: ";
    cin >> cm;

    int totalInches = round(cm / CM_PER_INCH);

    int yards = totalInches / 36;
    int remainingInches = totalInches % 36;

    int feet = remainingInches / 12;
    int inches = remainingInches % 12;

    cout << totalInches << " inch(es) is equal to:\n";
    cout << yards << " yard(s), " << feet << " feet (foot), "
         << inches << " inch(es)." << endl;

    return 0;
}
