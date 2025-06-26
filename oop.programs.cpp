// �                                                   � BASIC LEVEL PROGRAMS



//                                                        1. Palindrome Number


//#include <iostream>
//using namespace std;
//
//int main() {
//    int num, reverse = 0, original, rem;
//    cout << "Enter a number: ";
//    cin >> num;
//    original = num;
//    while(num != 0) {
//        rem = num % 10;
//        reverse = reverse * 10 + rem;
//        num /= 10;
//    }
//    if(original == reverse)
//        cout << "Palindrome";
//    else
//        cout << "Not a palindrome";
//    return 0;
//}



//                                                       2. Fibonacci Series (Iterative)


//#include <iostream>
//using namespace std;
//
//int main() {
//    int n1 = 0, n2 = 1, n3, i, n;
//    cout << "\nEnter number of terms: ";
//    cin >> n;
//    cout << n1 << " " << n2 << " ";
//    for(i=2; i<n; ++i) {
//        n3 = n1 + n2;
//        cout << n3 << " ";
//        n1 = n2;
//        n2 = n3;
//    }
//    return 0;
//}


//                                                      3. Factorial using Recursion


//#include <iostream>
//using namespace std;
//
//int factorial(int n) {
//    if(n == 0 || n == 1) return 1;
//    return n * factorial(n - 1);
//}
//
//int main() {
//    int n;
//    cout << "\nEnter number for factorial: ";
//    cin >> n;
//    cout << "Factorial: " << factorial(n);
//    return 0;
//}


//                                                        4. Check Prime Number


//#include <iostream>
//using namespace std;
//
//bool isPrime(int n) {
//    if(n <= 1) return false;
//    for(int i = 2; i <= n/2; i++)
//        if(n % i == 0) return false;
//    return true;
//}
//
//int main() {
//    int num;
//    cout << "\nEnter number: ";
//    cin >> num;
//    if(isPrime(num)) cout << "Prime";
//    else cout << "Not Prime";
//    return 0;
//}


// 🔹                                                    INTERMEDIATE LEVEL PROGRAMS



//                                                             5. LCM and GCD

//
//#include <iostream>
//using namespace std;
//
//int gcd(int a, int b) {
//    return (b == 0) ? a : gcd(b, a % b);
//}
//
//int lcm(int a, int b) {
//    return (a * b) / gcd(a, b);
//}
//
//int main() {
//    int x, y;
//    cout << "\nEnter two numbers: ";
//    cin >> x >> y;
//    cout << "GCD: " << gcd(x, y) << ", LCM: " << lcm(x, y);
//    return 0;
//}


//                                                      6. Check if Two Strings are Anagrams


//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//bool isAnagram(string a, string b) {
//    sort(a.begin(), a.end());
//    sort(b.begin(), b.end());
//    return a == b;
//}
//
//int main() {
//    string s1, s2;
//    cout << "\nEnter two strings: ";
//    cin >> s1 >> s2;
//    if(isAnagram(s1, s2)) cout << "Anagram";
//    else cout << "Not Anagram";
//    return 0;
//}


// 🔹                                                        CORE LEVEL PROGRAMS



//                                                       7. Bank Management System



//#include <iostream>
//using namespace std;
//
//class Bank {
//    string name;
//    int balance;
//public:
//    Bank(string n, int b) : name(n), balance(b) {}
//    void deposit(int amt) { balance += amt; }
//    void withdraw(int amt) {
//        if(balance >= amt) balance -= amt;
//        else cout << "Insufficient balance!\n";
//    }
//    void display() {
//        cout << "Name: " << name << "\nBalance: " << balance << endl;
//    }
//};
//
//int main() {
//    Bank b("Ali", 1000);
//    b.deposit(500);
//    b.withdraw(300);
//    b.display();
//    return 0;
//}


//                                                   8. Library Management System (Book Array)



//#include <iostream>
//using namespace std;
//
//class Book {
//public:
//    string title;
//    int id;
//    bool isIssued = false;
//
//    void input() {
//        cout << "Enter title and ID: ";
//        cin >> title >> id;
//    }
//
//    void issueBook() {
//        if (!isIssued) {
//            isIssued = true;
//            cout << "Book issued.\n";
//        } else {
//            cout << "Already issued.\n";
//        }
//    }
//};
//
//int main() {
//    Book b1;
//    b1.input();
//    b1.issueBook();
//    b1.issueBook();
//    return 0;
//}


//                                                         9. File Handling with Class




//#include <iostream>
//#include <fstream>
//using namespace std;
//
//class Student {
//    int id;
//    char name[30];
//public:
//    void getData() {
//        cout << "Enter ID and Name: ";
//        cin >> id >> name;
//    }
//    void putData() {
//        cout << "ID: " << id << ", Name: " << name << endl;
//    }
//};
//
//int main() {
//    Student s;
//    fstream file;
//
//    file.open("student.dat", ios::binary | ios::out);
//    s.getData();
//    file.write((char*)&s, sizeof(s));
//    file.close();
//
//    file.open("student.dat", ios::binary | ios::in);
//    while(file.read((char*)&s, sizeof(s))) {
//        s.putData();
//    }
//    file.close();
//    return 0;
//}

