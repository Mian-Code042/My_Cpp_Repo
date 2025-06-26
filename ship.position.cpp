#include <iostream>
using namespace std;
class ship {
private:
    int shipNumber;

    class angle {
    private:	
        int degrees;
        float minutes;
        char direction;
    public:
        void getAngle() {
            cout << "Enter degrees: ";
            cin >> degrees;
            cout << "Enter minutes: ";
            cin >> minutes;
            cout << "Enter direction (N/S/E/W): ";
            cin >> direction;
        }

        void display() {
            cout << degrees << "\xF8" << minutes << "' " << direction;
        }
    };
    angle latitude;
    angle longitude;
public:
    ship(int number) {
        shipNumber = number;
    }
    void getPosition() {
        cout << "\nEnter latitude for Ship " << shipNumber << ":\n";
        latitude.getAngle();
        cout << "Enter longitude for Ship " << shipNumber << ":\n";
        longitude.getAngle();
    }
    void display() {
        cout << "\nShip Number: " << shipNumber << endl;
        cout << "Latitude: ";
        latitude.display();
        cout << "\nLongitude: ";
        longitude.display();
        cout << endl;
    }
};
int main() {
    ship s1(1),s2(2);
    s1.getPosition();
    cout << "\n--- Ship Position ---\n";
    s1.display();
    s2.getPosition();
    cout << "\n--- Ship Position ---\n";
    s2.display();
}