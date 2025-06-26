
     //                                                                           Question No : 1

/*#include <iostream>
#include <string>

using namespace std;

class Person {
public:
    string name;
    int age;
    string city;

    void getData() {
        cout << "Enter name: ";
        cin>>name;
        cout << "Enter city: ";
        cin>>city;
    }

    void getAge() {
        cout << "Enter age: ";
        cin >> age;
        
    }

    void display() const {
        cout << "Name: " << name << ", Age: " << age << ",  City: " << city << endl;
    }
};

int main() {    Person pers1, pers2;

    cout << "Enter details for Person 1:" << endl;
    pers1.getData();
    pers1.getAge();

    cout << "Enter details for Person 2:" << endl;
    pers2.getData();
    pers2.getAge();

    if (pers1.age > pers2.age) {
        cout << "\nOlder Person is:" << endl;
        pers1.display();
    } else if (pers2.age > pers1.age) {
        cout << "\nOlder Person is:" << endl;
        pers2.display();
    } else {
        cout << "\nBoth persons are of the same age." << endl;
        pers1.display();
        pers2.display();
    }

    return 0;
}*/



  //                                                                           Question No : 2
  

/*#include <iostream>
using namespace std;

class RightAngleTriangle {
private:
    int rows;

public:
    RightAngleTriangle(int r)  {
	      rows = r;
	}

    void printPattern() {
        for (int i = 1; i <= rows; ++i) {
            for (int j = 1; j <= i; ++j) {
                cout << i << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    RightAngleTriangle triangle(rows);
    triangle.printPattern();

    return 0;
}*/


 //                                                                           Question No : 3
 
 
 
#include <iostream>
using namespace std;

class Nine {
private:
    int count;
    int sum;

public:
    Nine() {
        count = 0;
        sum = 0;
    }

    void findAndSum() {
        for (int i = 100; i <= 200; ++i) {
            if (i % 9 == 0) {
                count++;
                sum += i;
            }
        }
    }

    int getCount() {
        return count;
    }

    int getSum() {
        return sum;
    }
};

int main() {
    Nine divisible;
    divisible.findAndSum();
    cout << "Count of integers divisible by 9: " << divisible.getCount() << endl;
    cout << "Sum of integers divisible by 9: " << divisible.getSum() << endl;
    return 0;
}