#include <iostream>
#include <map>
#include <string>
#include <iomanip>

using namespace std;

// Market data structure
struct Stock {
    string name;
    double price;
};

// User class
class User {
private:
    string username;
    double balance;
    map<string, int> portfolio;

public:
    // ✅ Default constructor (to fix the error)
    User() {
        username = "unknown";
        balance = 10000.0;
        portfolio["AAPL"] = 0;
        portfolio["GOOG"] = 0;
        portfolio["TSLA"] = 0;
    }

    // Parameterized constructor
    User(string uname) : username(uname), balance(10000.0) {
        portfolio["AAPL"] = 0;
        portfolio["GOOG"] = 0;
        portfolio["TSLA"] = 0;
    }

    string getUsername() { return username; }
    double getBalance() { return balance; }

    void viewPortfolio() {
        cout << "\n----- Portfolio for " << username << " -----\n";
        for (auto &stock : portfolio)
            cout << stock.first << ": " << stock.second << " shares\n";
        cout << "Balance: $" << fixed << setprecision(2) << balance << "\n";
    }

    void viewCapital(map<string, Stock> &market) {
        double capital = balance;
        for (auto &s : portfolio)
            capital += s.second * market[s.first].price;

        cout << "\nTotal Capital: $" << fixed << setprecision(2) << capital << "\n";
    }

    bool buyStock(string symbol, int qty, map<string, Stock> &market) {
        double cost = market[symbol].price * qty;
        if (balance >= cost) {
            balance -= cost;
            portfolio[symbol] += qty;
            cout << "Purchased " << qty << " shares of " << symbol << ".\n";
            cout << "New Balance: $" << fixed << setprecision(2) << balance << "\n";
            return true;
        } else {
            cout << "Insufficient funds!\n";
            return false;
        }
    }

    bool sellStock(string symbol, int qty, map<string, Stock> &market) {
        if (portfolio[symbol] >= qty) {
            double proceeds = market[symbol].price * qty;
            balance += proceeds;
            portfolio[symbol] -= qty;
            cout << "Sold " << qty << " shares of " << symbol << ".\n";
            cout << "New Balance: $" << fixed << setprecision(2) << balance << "\n";
            return true;
        } else {
            cout << "Insufficient stock holdings!\n";
            return false;
        }
    }
};

// Global data
map<string, User> users;
map<string, Stock> market = {
    {"AAPL", {"Apple Inc.", 150.00}},
    {"GOOG", {"Alphabet Inc.", 2800.00}},
    {"TSLA", {"Tesla Motors", 700.00}}
};

// Function declarations
void mainMenu();
void registerUser();
void loginUser();
void tradingMenu(User &user);
void displayMarket();

int main() {
    mainMenu();
    return 0;
}

// Main Menu
void mainMenu() {
    int choice;
    while (true) {
        cout << "\n===== Main Menu =====\n";
        cout << "1. Register\n2. Login\n3. Exit\nChoice: ";
        cin >> choice;
        cin.ignore();

        if (choice == 1) {
            registerUser();
        } else if (choice == 2) {
            loginUser();
        } else if (choice == 3) {
            cout << "Exiting...\n";
            break;
        } else {
            cout << "Invalid choice. Try again.\n";
        }
    }
}

// Register a new user
void registerUser() {
    string uname;
    cout << "Enter username to register: ";
    getline(cin, uname);
    if (users.find(uname) == users.end()) {
        users[uname] = User(uname);  // Uses parameterized constructor
        cout << "Registration successful!\n";
    } else {
        cout << "Username already exists!\n";
    }
}

// Login existing user
void loginUser() {
    string uname;
    cout << "Enter username to login: ";
    getline(cin, uname);
    if (users.find(uname) != users.end()) {
        cout << "Login successful. Welcome, " << uname << "!\n";
        tradingMenu(users[uname]);
    } else {
        cout << "User not found!\n";
    }
}

// Show available market stocks
void displayMarket() {
    cout << "\n----- Market Stocks -----\n";
    cout << "Symbol\tCompany Name\t\tPrice\n";
    for (auto &s : market)
        cout << s.first << "\t" << s.second.name << "\t$" << fixed << setprecision(2) << s.second.price << "\n";
}

// Trading Menu
void tradingMenu(User &user) {
    int choice;
    while (true) {
        cout << "\n===== Trading Menu =====\n";
        cout << "1. View Market\n2. Buy Stock\n3. Sell Stock\n4. View Portfolio\n5. Update Capital\n6. Logout\nChoice: ";
        cin >> choice;

        if (choice == 1) {
            displayMarket();
        } else if (choice == 2) {
            string symbol;
            int qty;
            cout << "Enter Stock Symbol to Buy: ";
            cin >> symbol;
            cout << "Enter Quantity: ";
            cin >> qty;
            if (market.find(symbol) != market.end()) {
                user.buyStock(symbol, qty, market);
            } else {
                cout << "Invalid stock symbol!\n";
            }
        } else if (choice == 3) {
            string symbol;
            int qty;
            cout << "Enter Stock Symbol to Sell: ";
            cin >> symbol;
            cout << "Enter Quantity: ";
            cin >> qty;
            if (market.find(symbol) != market.end()) {
                user.sellStock(symbol, qty, market);
            } else {
                cout << "Invalid stock symbol!\n";
            }
        } else if (choice == 4) {
            user.viewPortfolio();
        } else if (choice == 5) {
            user.viewCapital(market);
        } else if (choice == 6) {
            cout << "Logged out successfully.\n";
            break;
        } else {
            cout << "Invalid choice.\n";
        }
    }
}
