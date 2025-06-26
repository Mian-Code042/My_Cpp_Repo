#include <iostream>
using namespace std;

class Rectangle{
	int length;
	int width;
	public:
		void setData(int l,int w){
			length=l;
			width=w;
		}
		int area(){
			return length*width;
		}
};

int main(){
	Rectangle* rect=new Rectangle;
	rect->setData(5,4);
	cout<<"The Area of the Rectangle is :"<<rect->area()<<endl;
	delete rect;
	return 0;
}