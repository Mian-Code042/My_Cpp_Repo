#include <iostream>
#include <limits>
using namespace std;

const int MAX_BOOKS = 100;
const int MAX_MEMBERS = 100;

struct Book {
    string ISBN, title, author, publisher;
    int quantity;
};

struct Member {
    string ID, name, address, contact;
};

Book books[MAX_BOOKS];
Member members[MAX_MEMBERS];
int bookCount = 0, memberCount = 0;

// Utility function for safe integer input
int getValidInt(string prompt) {
    int value;
    while (true) {
        cout << prompt;
        cin >> value;
        if (!cin.fail())
            break;
        cout << "Invalid input! Please enter a number.\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    return value;
}

// --- Book Functions ---
void addBook() {
    if (bookCount < MAX_BOOKS) {
        cout << "\nEnter ISBN: "; cin >> books[bookCount].ISBN;
        cout << "Enter Title (no spaces): "; cin >> books[bookCount].title;
        cout << "Enter Author (no spaces): "; cin >> books[bookCount].author;
        cout << "Enter Publisher (no spaces): "; cin >> books[bookCount].publisher;
        books[bookCount].quantity = getValidInt("Enter Quantity: ");
        bookCount++;
        cout << "Book added successfully!\n";
    } else {
        cout << "Book list is full!\n";
    }
}

void displayBooks() {
    if (bookCount == 0) {
        cout << "No books in library.\n";
        return;
    }
    cout << "\n--- Books in Library ---\n";
    for (int i = 0; i < bookCount; i++) {
        cout << i + 1 << ". ISBN: " << books[i].ISBN << ", Title: " << books[i].title
             << ", Author: " << books[i].author << ", Publisher: " << books[i].publisher
             << ", Quantity: " << books[i].quantity << endl;
    }
}

void searchBook() {
    string key;
    cout << "\nEnter ISBN or Title to search: ";
    cin >> key;
    bool found = false;
    for (int i = 0; i < bookCount; i++) {
        if (books[i].ISBN == key || books[i].title == key) {
            cout << "Book Found: ISBN: " << books[i].ISBN << ", Title: " << books[i].title
                 << ", Author: " << books[i].author << ", Publisher: " << books[i].publisher
                 << ", Quantity: " << books[i].quantity << endl;
            found = true;
        }
    }
    if (!found) cout << "Book not found.\n";
}

void updateBook() {
    string isbn;
    cout << "\nEnter ISBN of book to update: ";
    cin >> isbn;
    for (int i = 0; i < bookCount; i++) {
        if (books[i].ISBN == isbn) {
            cout << "Enter new Title: "; cin >> books[i].title;
            cout << "Enter new Author: "; cin >> books[i].author;
            cout << "Enter new Publisher: "; cin >> books[i].publisher;
            books[i].quantity = getValidInt("Enter new Quantity: ");
            cout << "Book updated.\n";
            return;
        }
    }
    cout << "Book not found.\n";
}

void deleteBook() {
    string isbn;
    cout << "\nEnter ISBN to delete: ";
    cin >> isbn;
    for (int i = 0; i < bookCount; i++) {
        if (books[i].ISBN == isbn) {
            for (int j = i; j < bookCount - 1; j++)
                books[j] = books[j + 1];
            bookCount--;
            cout << "Book deleted.\n";
            return;
        }
    }
    cout << "Book not found.\n";
}

// --- Member Functions ---
void addMember() {
    if (memberCount < MAX_MEMBERS) {
        cout << "\nEnter Member ID: "; cin >> members[memberCount].ID;
        cout << "Enter Name (no spaces): "; cin >> members[memberCount].name;
        cout << "Enter Address (no spaces): "; cin >> members[memberCount].address;
        cout << "Enter Contact: "; cin >> members[memberCount].contact;
        memberCount++;
        cout << "Member added successfully!\n";
    } else {
        cout << "Member list is full!\n";
    }
}

void displayMembers() {
    if (memberCount == 0) {
        cout << "No members in system.\n";
        return;
    }
    cout << "\n--- Library Members ---\n";
    for (int i = 0; i < memberCount; i++) {
        cout << i + 1 << ". ID: " << members[i].ID << ", Name: " << members[i].name
             << ", Address: " << members[i].address << ", Contact: " << members[i].contact << endl;
    }
}

void searchMember() {
    string key;
    cout << "\nEnter Member ID or Name: ";
    cin >> key;
    bool found = false;
    for (int i = 0; i < memberCount; i++) {
        if (members[i].ID == key || members[i].name == key) {
            cout << "Member Found: ID: " << members[i].ID << ", Name: " << members[i].name
                 << ", Address: " << members[i].address << ", Contact: " << members[i].contact << endl;
            found = true;
        }
    }
    if (!found) cout << "Member not found.\n";
}

void updateMember() {
    string id;
    cout << "\nEnter Member ID to update: ";
    cin >> id;
    for (int i = 0; i < memberCount; i++) {
        if (members[i].ID == id) {
            cout << "Enter new Address: "; cin >> members[i].address;
            cout << "Enter new Contact: "; cin >> members[i].contact;
            cout << "Member updated.\n";
            return;
        }
    }
    cout << "Member not found.\n";
}

void deleteMember() {
    string id;
    cout << "\nEnter Member ID to delete: ";
    cin >> id;
    for (int i = 0; i < memberCount; i++) {
        if (members[i].ID == id) {
            for (int j = i; j < memberCount - 1; j++)
                members[j] = members[j + 1];
            memberCount--;
            cout << "Member deleted.\n";
            return;
        }
    }
    cout << "Member not found.\n";
}

// --- Book Lending ---
void lendBook() {
    string isbn, memId;
    cout << "\nEnter ISBN to lend: "; cin >> isbn;
    cout << "Enter Member ID: "; cin >> memId;
    for (int i = 0; i < bookCount; i++) {
        if (books[i].ISBN == isbn) {
            if (books[i].quantity > 0) {
                books[i].quantity--;
                cout << "Book lent to member " << memId << endl;
                return;
            } else {
                cout << "Book is currently out of stock.\n";
                return;
            }
        }
    }
    cout << "Book not found.\n";
}

void returnBook() {
    string isbn;
    cout << "\nEnter ISBN to return: "; cin >> isbn;
    for (int i = 0; i < bookCount; i++) {
        if (books[i].ISBN == isbn) {
            books[i].quantity++;
            cout << "Book returned successfully.\n";
            return;
        }
    }
    cout << "Book not found.\n";
}

// --- Main Menu ---
int main() {
    int choice;
    do {
        cout << "\n--- Library Management System ---\n";
        cout << "1. Add Book\n2. Display Books\n3. Search Book\n4. Update Book\n5. Delete Book\n";
        cout << "6. Add Member\n7. Display Members\n8. Search Member\n9. Update Member\n10. Delete Member\n";
        cout << "11. Lend Book\n12. Return Book\n0. Exit\n";
        choice = getValidInt("Enter your choice: ");

        switch (choice) {
            case 1: addBook(); break;
            case 2: displayBooks(); break;
            case 3: searchBook(); break;
            case 4: updateBook(); break;
            case 5: deleteBook(); break;
            case 6: addMember(); break;
            case 7: displayMembers(); break;
            case 8: searchMember(); break;
            case 9: updateMember(); break;
            case 10: deleteMember(); break;
            case 11: lendBook(); break;
            case 12: returnBook(); break;
            case 0: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 0);

    return 0;
}

