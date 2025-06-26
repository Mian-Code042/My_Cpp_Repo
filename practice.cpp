#include <iostream>
using namespace std;
//                                                  QUESTION NO : 01


 /*   int main(){
	int* p=new int;
	*p=10;
	cout<<"Value :"<<*p<<endl;
	delete p;
	return 0;
}*/

//                                                  QUESTION NO : 02

/*int main(){
	int* arr=new int[3];
	
	for(int i=0;i<3;i++){
		arr[i] = i+1;
	}
	
	for(int i=0;i<3;i++){
		cout<<arr[i]<<endl;
		
	}
	delete[] arr;
	return 0;
}*/

//                                                  QUESTION NO : 03


class Book{
	public:
	string title;
	Book(string t){
		title=t;
		cout<<"Book "<<title<<"  created \n";
		
	}
	~Book(){
		cout<<"Book "<<title<<" destroyed \n";
	}
		
};

int main(){
	int n;
	cout<<"Enter Number of the Books : ";
	cin>>n;
	
	Book** books=new Book* [n];
		cin.ignore();
	
	for(int i=0;i<n;i++){
		string name;
		cout<<"Enter the title of the Book :"<<i+1<<endl;
		getline(cin,name);
		
		books[i]=new Book(name);
		
	}
	for(int i=0;i<n;i++){
		delete books[i];
	}
	delete[] books;
	return 0;
}