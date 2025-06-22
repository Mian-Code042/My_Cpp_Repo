#include <iostream>
using namespace std;

struct Services {         //Struct using 
    float labTest;
    float surgery;
    float medicine;
};

class Patient {
private:
    string name;
    int age;
    int daysAdmitted;
    float roomChargePerDay;
    Services serviceCharges;            //Struct using
    float insuranceDiscount;
    float totalBill;

public:
    Patient(string n, int a, int d, float r, Services s, float disc) {
        name = n;
        age = a;
        daysAdmitted = d;
        roomChargePerDay = r;
        serviceCharges = s;
        insuranceDiscount = disc;
        totalBill = 0;
    }

    void calculateBill() {
        float roomCost = daysAdmitted * roomChargePerDay;
        float serviceCost = serviceCharges.labTest + serviceCharges.surgery + serviceCharges.medicine;
        float gross = roomCost + serviceCost;
        totalBill = gross - (gross * insuranceDiscount / 100);
    }

    void displayBill() {
        cout << "\n--- Bill Summary ---" << endl;
        cout << "Patient: " << name << "\nAge: " << age << endl;
        cout << "Room Cost: " << daysAdmitted * roomChargePerDay << endl;
        cout << "Lab Tests: " << serviceCharges.labTest << ", Surgery: " << serviceCharges.surgery 
             << ", Medicine: " << serviceCharges.medicine << endl;
        cout << "Insurance Discount: " << insuranceDiscount << "%" << endl;
        cout << "Total Bill: " << totalBill << endl;
    }
};

int main() {
    string name;
    int age, days;
    float roomRate, lab, surgery, medicine, discount;

    cout << "Enter patient name, age: ";
    cin >> name >> age;
    cout << "Enter days admitted and room charge per day: ";
    cin >> days >> roomRate;
    cout << "Enter charges (lab test, surgery, medicine): ";
    cin >> lab >> surgery >> medicine;
    cout << "Enter insurance discount (%): ";
    cin >> discount;

    Services s = { lab, surgery, medicine };
    Patient p(name, age, days, roomRate, s, discount);
    p.calculateBill();
    p.displayBill();

    return 0;
}
