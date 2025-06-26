#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the Size of the Array :"<<endl;
	cin>>n;
	float* arr=new float[n];
	cout<<"Enter "<<n<<" Float Elements :"<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	float sum=0;
	for(int i=0;i<n;i++){
		sum=sum+arr[i];
	}
	cout<<"Sum of the Array Elements : "<<sum<<endl;
	float average=sum/n;
	cout<<"The Average of the Elements of Array is :"<<average<<endl;
	return 0;
	
}