#include <iostream>
using namespace std;
int main(){
	int* arr1=new int[10];
	int* arr2=new int[10];
	int* sumArr=new int[10];
	
	cout<<"Enter 10 Integers for first Array :"<<" ";
	for(int i=0;i<10;i++){
		cin>>arr1[i];
	}
	cout<<"Enter 10 Integers for second Array :"<<" ";
	for(int i=0;i<10;i++){
		cin>>arr2[i];
	}
	cout<<"Sum of Both Arrays is :"<<endl;
	for(int i=0;i<10;i++){
		sumArr[i]=arr1[i]+arr2[i];
		cout<<sumArr[i]<<" ";
		
	}
	delete[] arr1;
	delete[] arr2;
	delete[] sumArr;
	
	return 0;
}