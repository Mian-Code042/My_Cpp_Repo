#include <iostream>
using namespace std;

int main(){
	double quarters;
	double dimes;
	double nickels;
	
	cout<<"Enter the Quarters :";
	cin>>quarters;
	cout<<"Enter the dimes :";
	cin>>dimes;
	cout<<"Enter the nickels :";
	cin>>nickels;
	int totalPennies = (quarters * 25) + (dimes * 10) + (nickels * 5);
	cout << "Total value in pennies: " << totalPennies << " cents" << endl;

    return 0;

}