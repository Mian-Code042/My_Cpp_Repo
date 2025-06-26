#include <iostream>
using namespace std;

class Rectangle{
	public:
		int l;
		int b;
		Rectangle(){//default constructor - no arg pass
			l=0;
			b=0;
			cout<<endl;
		}
		Rectangle(int x,int y){//parameterized constructor
	l=x;
	b=y;
	cout<<endl;
}
		Rectangle(Rectangle& r){//copy constructor - initialize an object by another existing onject 
	l=r.l;
	b=r.b;
	cout<<endl;
}
		~Rectangle(){
			 cout<<"Destructor is called";
			 cout<<endl;
		            }
		
};
     int main(){
     	Rectangle* r1= new Rectangle();
     	cout<<r1->l<<"  "<<r1->b<<endl;
     	delete r1;
     	Rectangle r2(3,4);
     	cout<<r2.l<<"  "<<r2.b<<endl;
     	
     	Rectangle r3=r2;
     	cout<<r3.l<<"  "<<r3.b<<endl;
     	
     	return 0;
		      }
	 