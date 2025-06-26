#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
public:
    Person(string n) {
        name = n;
    }
    Person(const Person &p) {
        name = p.name;
        cout << "Copy constructor called. Name copied: " << name << endl;
    }
    void display() const {
        cout << "Name: " << name << endl;
    }
};
int main() {
    Person person1("Wasee");     
    Person person2 = person1;    

    person1.display();           
    person2.display();       
}