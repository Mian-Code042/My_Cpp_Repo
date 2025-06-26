#include <iostream>
using namespace std;

class PrintData {
public:
    void print(int i) {
        cout << "Integer: " << i << endl;
    }

    void print(float f) {
        cout << "Float: " << f << endl;
    }

    void print(string s) {
        cout << "String: " << s << endl;
    }
};

int main() {
    PrintData p;
    p.print(42);
    p.print(3.14f);
    p.print("Hello");
    return 0;
}
