//Implement a class BankAccount that demonstrates encapsulation.

#include <iostream>
using namespace std;

class BankAccount {
private:
    float balance;

public:
    BankAccount() {
        balance = 0.0;
    }

    void deposit(float amount) {
        if (amount > 0)
            balance += amount;
    }

    void withdraw(float amount) {
        if (amount > 0 && amount <= balance)
            balance -= amount;
        else
            cout << "Insufficient balance or invalid amount!" << endl;
    }

    float getBalance() {
        return balance;
    }
};

int main() {
    BankAccount b;
    b.deposit(1000);
    b.withdraw(400);
    cout << "Current Balance: $" << b.getBalance() << endl;
    return 0;
}
