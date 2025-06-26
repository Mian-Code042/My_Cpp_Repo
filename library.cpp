#include <iostream>
using namespace std;

class book{
	public:
		string title;
		string author;
		int price ;
		book(string title,string author,int price ){
			this->title=title;
			this->author=author;
			this->price=price;
		}
		void displayDetail(){
		
			cout<<" Title is :"<<title<<endl;
			cout<<" Author is :"<<author<<endl;
			cout<<" {Price is :"<<price<<endl;
		}
};
   int main(){
   	book b1("Computing and Emerging technologies ","Mian Nisar ul Hassan",2000);
   	b1.displayDetail();
   }