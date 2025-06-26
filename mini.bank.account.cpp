#include <iostream>
using namespace std;
class bankAccount{
	
	int accountNumber;
	string accountHolderName;
	double balance;
	
	public :
		bankAccount(int accountNumber, string accountHolderName,double balance){
			this->accountNumber=accountNumber;
			this->accountHolderName=accountHolderName;
			this->balance=balance;
		}
		
		void deposit(){
			int a;
			cout<<"Enter the ammount you want to deposit :";
			cin>>a;
			if(a<0) cout<<"Invalid Ammount"<<endl;
			else balance = a;
		}
		void withdraw(){
			int b;
			cout<<"Enter the ammount you want to withdraw :";
			cin>>b;
			if(b<=balance){
				balance=balance-b;
			}
			else cout<<"Insufficient Balance :"<<endl;
		}
		void displayAccountDetail(){
			cout<<"Account Number ="<<accountNumber<<endl;
			cout<<"Account Holder Name : "<<accountHolderName<<endl;
			cout<<"Current Balance ="<<balance<<endl;
		}
		
};

int main(){
	bankAccount b1(12345678,"Mian Nisar",0);
	b1.deposit();
	b1.withdraw();
	b1.displayAccountDetail();
	return 0;
}