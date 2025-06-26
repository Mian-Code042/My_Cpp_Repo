#include<iostream>
#include<string>
using namespace std;
class add{
	private:
		int a,b,c;
	public:
	   add():a(12),b(13){
	   }	
	   void displaysum();
};
void add::displaysum(){
	c=a+b;
	cout<<"sum is : "<<c<<endl;
}
int main(){
	add a1;
	a1.displaysum();
}
