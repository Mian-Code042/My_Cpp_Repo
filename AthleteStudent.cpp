// Create a program to illustrate multiple inheritance using classes Athlete and Student, and a derived class Scholar.

#include <iostream>
using namespace std;

class Athlete {
protected:
    string sport;

public:
    void setSport(string s) {
        sport = s;
    }
};

class Student {
protected:
    float GPA;

public:
    void setGPA(float g) {
        GPA = g;
    }
};

class Scholar : public Athlete, public Student {
public:
    void display() {
        cout << "Sport: " << sport << "\nGPA: " << GPA << endl;
    }
};

int main() {
    Scholar sc;
    sc.setSport("Basketball");
    sc.setGPA(3.9);
    sc.display();
    return 0;
}
