#include<iostream>
using namespace std;

class Student{
	string name;
	int age;
	public:
		void setData(string n,int a){
			name=n;
			age=a;
			
		}
		void Display(){
			cout<<"Name of Student : "<<name<<"\n"<<"Age of Student : "<<age<<endl;
			
		}
};
int main(){
	Student s1;
	Student* ptr=&s1;
	ptr->setData("Mian Nisar",18);
	ptr->Display();
	
}