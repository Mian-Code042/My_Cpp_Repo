#include <iostream>
#include <cmath>
using namespace std;

int main(){
	float n1,n2,n3,n4,n5;
	cout<<"Enter the five decimal Numbers "<<endl;
	cin>>n1>>n2>>n3>>n4>>n5;
	double sum=n1+n2+n3+n4+n5;
	cout<<"The Sum of the Decimals ="<<sum<<endl;
	int closeInteger=round(sum);
	cout<<"The closest Integer is :"<<closeInteger<<endl;
	return 0;
	
}