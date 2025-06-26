#include<iostream>
#include<string>
using namespace std;

class Employee {
public:
    int empID;
    string name;
    string designation;

    void getEmployeeDetails() {
        cout << "Enter Employee ID: ";
        cin >> empID;
        cin.ignore();
        cout << "Enter Employee Name: ";
        getline(cin, name);
        cout << "Enter Designation: ";
        getline(cin, designation);
    }

    void displayEmployeeDetails() {
        cout << "Employee ID: " << empID << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Employee Designation: " << designation << endl;
    }
};

class Salary : public Employee {
public:
    double basicPay;
    double humanResourceAllowance;
    double dearnessAllowance;
    double profitabilityFund;
    double netPay;

    void getSalaryDetails() {
        getEmployeeDetails();
        cout << "Enter Basic Pay: ";
        cin >> basicPay;
        cout << "Enter Human Resource Allowance: ";
        cin >> humanResourceAllowance;
        cout << "Enter Dearness Allowance: ";
        cin >> dearnessAllowance;
        cout << "Enter Profitability Fund: ";
        cin >> profitabilityFund;
        netPay = basicPay + humanResourceAllowance + dearnessAllowance - profitabilityFund;
    }

    void displaySalaryDetails() {
        displayEmployeeDetails();
        cout << "Basic Pay: " << basicPay << endl;
        cout << "Human Resource Allowance: " << humanResourceAllowance << endl;
        cout << "Dearness Allowance: " << dearnessAllowance << endl;
        cout << "Profitability Fund: " << profitabilityFund << endl;
        cout << "Net Pay: " << netPay << endl;
    }
};

class BankCredit : public Salary {
public:
    string bankName;
    string accountNumber;

    void getBankDetails() {
        getSalaryDetails();
        cout << "Enter Bank Name: ";
        cin.ignore();
        getline(cin, bankName);
        cout << "Enter Account Number: ";
        getline(cin, accountNumber);
    }

    void printBankDetails() {
        displaySalaryDetails();
        cout << "Bank Name: " << bankName << endl;
        cout << "Account Number: " << accountNumber << endl;
    }
};

int main() {
    int numEmployees;
    cout << "Enter the number of employees: ";
    cin >> numEmployees;

    BankCredit employees[numEmployees];

    for (int i = 0; i < numEmployees; ++i) {
        cout << "\nEnter details for employee " << i + 1 << ":\n";
        employees[i].getBankDetails();
        cout << "\nDisplaying details for employee " << i + 1 << ":\n";
        employees[i].printBankDetails();
    }

      return 0;
}