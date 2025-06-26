// Demonstrate method overriding using a base class Shape and derived classes Circle, Rectangle

#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() {
        cout << "Base Shape - no area defined." << endl;
    }
};

class Circle : public Shape {
public:
    void area() override {
        cout << "Area of Circle = π × r × r" << endl;
    }
};

class Rectangle : public Shape {
public:
    void area() override {
        cout << "Area of Rectangle = length × width" << endl;
    }
};

int main() {
    Shape* s;
    Circle c;
    Rectangle r;

    s = &c;
    s->area();

    s = &r;
    s->area();

    return 0;
}
