#include <iostream>
using namespace std;

int globalcount= 0;  

class Object {
private:
    int serialNumber;
public:
    Object();
    void showSerial();
};
Object::Object(){
        globalcount++;
        serialNumber = globalcount;
    }
void Object::showSerial() {
        cout << "object number = " << serialNumber << endl;
    }
int main() {
    Object obj1, obj2, obj3;
    obj1.showSerial();
    obj2.showSerial();
    obj3.showSerial();
    return 0;
}