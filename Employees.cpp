
#include <iostream>
using namespace std;

class Person {
protected: //it is an acceess specifier that can be accessed in its own class , derived class but not in outside the class
    string name;
    int age;

public:                                             //Can be accessed anywhere 
    void setPerson(string n, int a) {
        name = n;
        age = a;
    }

    void displayPerson() {
        cout << "Name: " << name << "\nAge: " << age << endl;
    }
};

class Employee : public Person {
private:                                             //Aceessed only in its class  
    int employeeId;
    float salary;

public:
    void setEmployee(int id, float sal) {
        employeeId = id;
        salary = sal;
    }

    void displayEmployee() {
        displayPerson();                               // from base class
        cout << "Employee ID: " << employeeId << "\nSalary: " << salary << endl;
    }
};

int main() {
    Employee e;
    e.setPerson("John", 30);
    e.setEmployee(1001, 50000);
    e.displayEmployee();
    return 0;
}
