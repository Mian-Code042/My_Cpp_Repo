#include <iostream>
using namespace std;

int factorial(int n){
	if(n<2){
		return 1;
	}
	return n*factorial(n-1);
	
}

int main(){
	int a;
	cout<<"Enter the Number "<<endl;
	cin>>a;
	cout<<"The Factorial of the "<< a <<"  is : "<<factorial(a)<<endl;
}