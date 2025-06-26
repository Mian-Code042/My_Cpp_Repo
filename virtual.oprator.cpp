#include <iostream>
using namespace std;

class base{
	public:
 	void virtual print() {                                             // use of virtual in line 6 ( this line will not displayed but of derived class )
		cout<<"This is the Base class's print function"<<endl;           
	}                                                                 // WE USE VIRTUAL TO AVOID FUNCTION OTHER WILL BE EXECUTED
	void  display(){
		cout<<"This is the Base class's display function"<<endl;    // this line of base will be executed because we dont use virtual in this line after void
	}
};

class derived : public base {
	public:
	void print(){
		cout<<"This is the Derived class's print function"<<endl;
	}
	void display(){
		cout<<"This is the Derived class's display function"<<endl;
	}
};
int main(){
	base *baseptr;
	derived d;
	baseptr = &d;
	
	baseptr -> print();
	baseptr -> display();
	return 0;
}