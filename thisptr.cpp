#include <iostream>
using namespace std;

class Account{
	float balance;
	public:
	       void setBalance(float balance){
	       	
	       	this->balance=balance;
	 } 
	 void displayBalance(){
	 	cout<<"Balance : $"<<balance<<endl;
	 }
};
int main(){
	Account acc;
	acc.setBalance(400.123);
	acc.displayBalance();
}