#include <iostream>
using namespace std;

int main(){
	double gallon_in_automobile;
	double capacity_per_gallon;
	cout<<"Enter the gallons of petrol in Automobile Tank :";
	cin>>gallon_in_automobile;
	cout<<"Enter the miles cover Automobile tank per Gallon :";
	cin>>capacity_per_gallon;
	   double miles_without_refueling=gallon_in_automobile*capacity_per_gallon;
	   cout<<"Total Number of miles automobile tank cover without refueling are :"<<miles_without_refueling<<endl;
	   return 0;
	   
}