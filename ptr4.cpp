#include <iostream>
using namespace std;
class Book{
	string title,author;
	float price;
	public:
		void setData(string t,string a, float p){
			title=t;
			author=a;
			price=p;
		}
		void Display(){
			
			cout<<"Title of Book : "<<title<<"\n"<<"Author Name : "<<author<<"\n"<<"Price of Book : "<<price<<endl;
			
		}
};
int main(){
	int n=3;
	Book* books=new Book[n];
	
	for(int i=0;i<n;i++){
		string t,a;
		float p;
		cout << "Enter title, author, price for book " << i + 1 << ": ";
        cin >> t >> a >> p;
		
         books[i].setData(t,a,p);
         
	}
	
	 for (int i = 0; i < n; i++) {
        books[i].Display();
	
}
    delete[] books;
    return 0;
}