#include <iostream>
#include <string>
using namespace std;

class Employee{
	int empID;
	string name;
	string designation;
	public:
	void getEmployeeDetails(){
		cout<<"Enter Employee ID :";
		cin>>empID;
		cin.ignore();
		cout<<"Enter Employee name :";
		getline(cin, name);
		cout<<"Enter the Designation :";
		getline(cin, designation);
		
	}
	
	void displayEmployeeDetails(){
		cout<<"Employee ID :"<<empID<<endl;
		cout<<"Employee Name :"<<name<<endl;
		cout<<"Employee Designation"<<designation<<endl;
		
	}
};

class Salary:public Employee{
	public:
	double basicPay;
	double humanResourceAllowance;
	double dearnessAllowance;
	double profitabilityFund;
	double netPay;
	void getSalaryDetails(){
		cout<<"Enter basic Pay of Employee :";
		cin>>basicPay;
		cout<<"Enter Human Resources Allowance :";
		cin>>humanResourceAllowance;
		cout<<"Enter profitability Fund :";
		cin>>profitabilityFund;
		netPay = basicPay+humanResourceAllowance+dearnessAllowance-profitabilityFund;
	}
	void displaySalaryDetails(){
		cout<<"Basic Pay :"<<basicPay<<endl;
		cout<<"Human Resource Allowance :"<<humanResourceAllowance<<endl;
		cout<<"Profit Ability Fund :"<<profitabilityFund<<endl;
		cout<<"Your Net Pay = "<<netPay<<endl;
		}
};
 class BankCredit: public Salary{
	public:
		string bankname;
		string accountNumber;
		void getBankDetails(){
			getSalaryDetails();
			cout<<"Enter Bank Name :";
			cin.ignore();
			getline(cin, bankname);
			cout<<"Enter Your Account Number :";
			getline(cin, accountNumber);
		}
		void printBankDetails(){
			displaySalaryDetails();
			cout<<"Bank Name: "<<bankname<<endl;
			cout<<"Account Number: "<<accountNumber<<endl;
		}
};
    int main(){
	int numEmployees;
	cout<<"Enter the Number of Employees : ";
	cin>>numEmployees;
	
	BankCredit employees[numEmployees];
	
	for(int i=0; i < numEmployees; ++i){
		cout<<"Enter the Details for Employee"<<" : "<<i+1<<endl;
		employees[i].getBankDetails();
		cout<<"Displaying datails for Employee"<<" : "<<i+1<<endl;
		employees[i].printBankDetails();
	}
	return 0;
}