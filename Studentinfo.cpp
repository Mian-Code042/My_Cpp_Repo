#include <iostream>
using namespace std;

class Student {
	public:
		string name;
		int age;
		
		void show(){
			cout<<"Name :"<<name <<" \n Age :"<<age<<endl;
		}
};

int main(){
	Student s;
	s.name = "Nisar";
	s.age = 17;
	s.show();
	return 0;
}