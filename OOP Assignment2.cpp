

//                                       task 01












#include <iostream>
#include <iomanip> // for setw and setfill
using namespace std;
class Date {
private:
    int day;
    int month;
    int year;
public:
    // Setter functions
    void setDay(int d) { day = d; }
    void setMonth(int m) { month = m; }
    void setYear(int y) { year = y; }
    // Getter functions
    int getDay() const { return day; }
    int getMonth() const { return month; }
    int getYear() const { return year; }
    // Function to display date
    void displayDate() const {
        cout << setw(2) << setfill('0') << day << "/"
             << setw(2) << setfill('0') << month << "/"
             << year << endl;
    }
};
int main() {
    Date dates[5];
    // Storing dates
    dates[0].setDay(25); dates[0].setMonth(12); dates[0].setYear(1876);
    dates[1].setDay(9); dates[1].setMonth(11); dates[1].setYear(1877);
    dates[2].setDay(21); dates[2].setMonth(4); dates[2].setYear(1938);
    dates[3].setDay(14); dates[3].setMonth(8); dates[3].setYear(1947);
    dates[4].setDay(11); dates[4].setMonth(9); dates[4].setYear(1948);
    // Displaying dates
    for (int i = 0; i < 5; i++) {
        dates[i].displayDate();
    }
    return 0;
}














//                                                         task 2








#include <iostream>
#include <string>
using namespace std;
class SaleItem {
private:
    int ID;
    string name;
    int quantity;
    double price;
public:
    // Default constructor
    SaleItem() : ID(999), name(""), quantity(-1), price(-1) {}
    // Parameterized constructor
    SaleItem(int id, string n, int qty, double p) : ID(id), name(n), quantity(qty), price(p) {}
    // Function to decrement quantity
    bool decrementQuantity(int qty) {
        if (qty > 0 && qty <= quantity) {
            quantity -= qty;
            return true;
        }
        return false;
    }
    // Function to display information
    void displayInformation() const {
        cout << "ID: " << ID << ", Name: " << name << ", Quantity: " << quantity << ", Price: " << price << endl;
    }
};
int main() {
    SaleItem item1(1, "Apple", 50, 10.5);
    item1.displayInformation();
    item1.decrementQuantity(5);
    item1.displayInformation();
    return 0;
}







//                                                     task 3






#include <iostream>
#include <string>
using namespace std;
class Car {
private:
    int yearModel;
    string make;
    int speed;
public:
    // Constructor
    Car(int year, string m) : yearModel(year), make(m), speed(0) {}
    // Getters
    int getYearModel() const { return yearModel; }
    string getMake() const { return make; }
    int getSpeed() const { return speed; }
    // Accelerate function
    void accelerate() {
        speed += 5;
    }
    // Brake function
    void brake() {
        speed -= 5;
        if (speed < 0) speed = 0; // Prevent negative speed
    }
};
int main() {
    Car myCar(2020, "Toyota");
    // Accelerate 5 times
    for (int i = 0; i < 5; i++) {
        myCar.accelerate();
        cout << "Current speed: " << myCar.getSpeed() << " km/h" << endl;
    }
    // Brake 5 times
    for (int i = 0; i < 5; i++) {
        myCar.brake();
        cout << "Current speed: " << myCar.getSpeed() << " km/h" << endl;
    }
    return 0;
}





//                                             task 4




//#include <iostream>
#include <string>

using namespace std;

class Person {
protected:
    string name;
    int age;
    string gender;

public:
    Person(string n, int a, string g) : name(n), age(a), gender(g) {}

    void displayPersonInfo() const {
        cout << "Name: " << name << ", Age: " << age << ", Gender: " << gender << endl;
    }
};

class Patient : public Person {
private:
    int patientID;
    string diagnosis;
    string appointmentDate;
    string doctorAssigned;

public:
    Patient(string n, int a, string g, int id, string diag, string appDate, string doc)
        : Person(n, a, g), patientID(id), diagnosis(diag), appointmentDate(appDate), doctorAssigned(doc) {}

    void displayPatientInfo() const {
        displayPersonInfo();
        cout << "Patient ID: " << patientID << ", Diagnosis: " << diagnosis
             << ", Appointment Date: " << appointmentDate << ", Doctor Assigned: " << doctorAssigned << endl;
    }

    void updateDiagnosis(string newDiagnosis) {
        diagnosis = newDiagnosis;
    }

    int getPatientID() const {
        return patientID;
    }
};

int main() {
    const int MAX_PATIENTS = 100;
    Patient patients[MAX_PATIENTS] = {
        {"", 0, "", 0, "", "", ""} // Initialize with empty patients
    };
    int patientCount = 0;
    int choice;

    do {
        cout << "Menu:\n1. Add Patient\n2. Display All Patients\n3. Update Diagnosis\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            if (patientCount < MAX_PATIENTS) {
                string name, gender, diagnosis, appointmentDate, doctorAssigned;
                int age, patientID;

                cout << "Enter Name: ";
                cin >> name;
                cout << "Enter Age: ";
                cin >> age;
                cout << "Enter Gender: ";
                cin >> gender;
                cout << "Enter Patient ID: ";
                cin >> patientID;
                cout << "Enter Diagnosis: ";
                cin >> diagnosis;
                cout << "Enter Appointment Date: ";
                cin >> appointmentDate;
                cout << "Enter Doctor Assigned: ";
                cin >> doctorAssigned;

                patients[patientCount] = Patient(name, age, gender, patientID, diagnosis, appointmentDate, doctorAssigned);
                patientCount++;
            } else {
                cout << "Patient limit reached!" << endl;
            }
        } else if (choice == 2) {
            for (int i = 0; i < patientCount; i++) {
                patients[i].displayPatientInfo();
    \        }
        } else if (choice == 3) {
            int id;
            string newDiagnosis;
            cout << "Enter Patient ID to update diagnosis: ";
            cin >> id;
            cout << "Enter New Diagnosis: ";
            cin >> newDiagnosis;

            bool found = false;
            for (int i = 0; i < patientCount; i++) {
                if (patients[i].getPatientID() == id) {
                    patients[i].updateDiagnosis(newDiagnosis);
                    found = true;
                    break;
                }
            }
            if (!found) {
                cout << "Patient ID not found!" << endl;
            }
        }
    } while (choice != 4);

    return 0;
}









