#include <iostream>
using namespace std;

class studentType{
	private:
		string firstName;
		string lastName;
		int age;
		double GPA;
		public:
			void getdata(string fName, string lName, int a , double gpa){
				firstName=fName;
				lastName=lName;
				age=a;
				GPA=gpa;
				
			}
			void showdata(){
				cout<<"Name of the Student: "<<firstName<<" "<<lastName<<"\nAge of the student :"<<age<<"\n GPA of the Student :"<<GPA<<endl;
				
			}
};
     int main(){
     	studentType s1,s2;
     	s1.getdata("ALI","HASSAN",17,3);
     	s1.showdata();
     	s2.getdata("MIAN","NISAR",18,3.98);
     	s2.showdata();
     	return 0;
	 }