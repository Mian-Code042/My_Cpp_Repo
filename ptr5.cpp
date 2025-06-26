#include <iostream>
using namespace std;

class Box{
	int length,breadth,height;
	public:
		void setdimensions(int l,int b,int h){
			length=l;
			breadth=b;
			height=h;
			}
			int volume(){
				return length*breadth*height;
			}
			Box largerBox(Box* b){
				if(this->volume() > b->volume())
				  return *this;
				  else 
				      return *b;
				}
				void display(){
					cout<<"Volume : "<<volume()<<endl;
				}
};
int main(){
	Box b1,b2,bigger;
	b1.setdimensions(1,2,3);
	b2.setdimensions(1,2,3);
	bigger = b1.largerBox(&b2);
	bigger.display();
	
}
