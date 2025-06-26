#include <iostream>
#include <string>
using namespace std;

class Person {
    string name;
    int roll_num;
    public:
    	person(string n, int r){
    		name=n;
    		roll_num=r;
    		
		}
		void display(){
			cout<<"Name of Student ="<<name<<endl;
			cout<<"Roll Number is = "<<roll_num<<endl;
   
}
};
int main(){
	person p1("Nisar",675);
	p1.display();
	person p2=p1;
	p2.display();
	return 0;
	
	
}