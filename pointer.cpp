#include <iostream>
#include <utility>
using namespace std;

int main(){
	int a=10;
	int b=5;
	int* ptr=&a;
	int* sePtr=&b;
	cout<<"The value of a and b before swaping :"<<*ptr<<","<<*sePtr<<endl;
	std::swap(*ptr,*sePtr);
	cout<<"Values of a and b after swapping :"<<*ptr<<","<<*sePtr<<endl;
	return 0;
}



//   ASSIGNMENT 10 QUESTIONS ABOUT POINTERS NEXT LAB 