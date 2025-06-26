#include <iostream>
using namespace std;

int main() {
    string a, b, c;

    cout << "Enter first string: ";
    cin >> a;
    cout << "Enter second string: ";
    cin >> b;
    cout << "Enter third string: ";
    cin >> c;

    cout << "\n--- Permutations ---" << endl;
    cout << a << " " << b << " " << c << endl;
    cout << a << " " << c << " " << b << endl;
    cout << b << " " << a << " " << c << endl;
    cout << b << " " << c << " " << a << endl;
    cout << c << " " << a << " " << b << endl;
    cout << c << " " << b << " " << a << endl;

    return 0;
}
