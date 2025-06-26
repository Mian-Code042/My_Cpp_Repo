#include <iostream>
using namespace std;

class Shape{
	public:
	virtual	void area(){
			cout<<"Base Shape"<<endl;
			
		}
};

class Circle: public Shape{
	float radius;
	public:
		Circle(float r): radius(r) {}
		void area() override {
			cout<<"Area of Circle : "<<3.14*radius*radius<<endl;
			
		}
};
class Rectangle: public Shape{
	int length,breadth;
	public:
		Rectangle(int l,int b): length(l),breadth(b){}
		void area(){
			cout<<"Area of Rectangle : "<<length*breadth<<endl;
		}
};

int main(){
	Shape* s;
	Circle c(8);
	Rectangle r(5,4);
	
	s=&c;
	s->area();
	
	s=&r;
	s->area();
	return 0;
}