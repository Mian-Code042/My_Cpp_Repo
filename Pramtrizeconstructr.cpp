#include <iostream>
using namespace std;

class Person {
	public:
		string name ;
		Person(string n){
			name = n;
			
		}
		  void greeting(){
    	cout<<"Assalamualaikum "<<name<<"!"<<endl;
    	
	}
};
int main(){
	Person p("Mian Nisar");
	p.greeting();
	return 0;
}
  