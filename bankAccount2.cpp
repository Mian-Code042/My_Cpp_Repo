#include <iostream>
using namespace std;

class BankAccount {
    int accountNumber;
    string accountHolder;
    double balance;

public:
    // Parameterized constructor
    BankAccount(int accNo, string name, double bal);

    void deposit(double amount);
    void withdraw(double amount);
    void display() const;
};

BankAccount::BankAccount(int accNo, string name, double bal) {
    accountNumber = accNo;
    accountHolder = name;
    balance = bal;
}

void BankAccount::deposit(double amount) {
    balance += amount;
}

void BankAccount::withdraw(double amount) {
    if (amount > balance) {
        cout << "Insufficient Balance!" << endl;
    } else {
        balance -= amount;
    }
}

void BankAccount::display() const {
    cout << "\nAccount No: " << accountNumber << "\n Name: " << accountHolder << "\n Balance: $" << balance << endl;
}

int main() {
    BankAccount acc1(1001, "Ahmed", 5000.0);
    BankAccount acc2(1002, "Sara", 3000.0);

    acc1.deposit(1000);
    acc2.withdraw(500);

    cout << "Account 1 details:\n ";
    acc1.display();

    cout << "\n Account 2 details:\n ";
    acc2.display();

    return 0;
}
