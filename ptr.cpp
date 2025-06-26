#include <iostream>
using namespace std;

void swap(int*a , int* b){
	int temp=*a;
      *a=*b;
      *b=temp;
	
}
int main(){
	int x=10;
	int y=5;
	swap(&x,&y);
	cout<<"The value of *a after swap = "<< x <<"\n"<<"The value of *b after swap = "<< y <<endl;
	return 0;
}