#include<iostream>
#include<string>
using namespace std;
class employee{
	private:
		int employeeno;
		float employeecomp;
	public:
	 employee():employeeno(0),employeecomp(0){
	 }	
	 void input();
	 void display();
};
void employee::input(){
	cout<<"Enter Employee Number : ";cin>>employeeno;cout<<"and\nEnter Employee Compensation : ";cin>>employeecomp;
}
void employee::display(){
	cout<<"\nEmployee Number : "<<employeeno<<"\nEmployee Cpmpensation : "<<employeecomp<<endl;
}
int main(){
	employee e[3];
	cout<<"Enter Data Of Employee's"<<endl;
	for(int i=0;i<3;i++){
		e[i].input();
	}
	for(int i=0;i<3;i++){
		cout<<"\nDisplay "<<i+1<<endl;
		e[i].display();
	}
}