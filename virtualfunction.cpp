//Create a base class Animal with a virtual function speak(). Create Dog and Cat classes overriding speak().

#include <iostream>
using namespace std;

class Animal {
public:
    virtual void speak() {
        cout << "Some generic animal sound." << endl;
    }
};

class Dog : public Animal {
public:
    void speak() override {
        cout << "Dog says: Woof!" << endl;
    }
};

class Cat : public Animal {
public:
    void speak() override {
        cout << "Cat says: Meow!" << endl;
    }
};

int main() {
    Animal* a;
    Dog d;
    Cat c;

    a = &d;
    a->speak();

    a = &c;
    a->speak();

    return 0;
}
