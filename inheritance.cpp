#include <iostream>
using namespace std;

class dog{
	public:
		void bark(){
			cout<<"The dog barks "<<endl;
		}
		
}

class cat: public dog{
	public:
		void tab(){
			cout<<"cat on the table"<<endl;
		}
		
};

int main(){
	dog d;
	d.bark();
	d.tab();
	return 0;
	
}