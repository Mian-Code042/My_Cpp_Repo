#include <iostream>
using namespace std;
int main(){
	int* arr=new int[5];
	cout<<"Enter five Integer Values "<<endl;
	for(int i=0;i<5;i++){
		cin>>arr[i];
	}
	int* newArr=new int[10];
     for(int i=0;i<5;i++){
     	newArr[i]=arr[i];
	 }
	 cout<<"Enter Five more integer values :"<<endl;
	 for(int i=5;i<10;i++){
	 	cin>>newArr[i];
	 }
	delete[] arr;
	arr=newArr;
	cout<<"Total Integer Values :"<<endl;
	for(int i=0;i<10;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}