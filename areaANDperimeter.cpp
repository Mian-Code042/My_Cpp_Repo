#include <iostream>
using namespace std;

class Rectangle{
	private :
		float length;
		float width;
		
		public :
			void setDimensions(float l, float w){
				
				length=l;
				width=w;
			}
			float area(){
				
				return length*width;
					    };
			float perimeter(){
				
				return 2*(length+width);
			}		    
			
			
};
  int main(){
  	Rectangle r1;
  	r1.setDimensions(3.4,5.9);
  	cout<<"The Area of the Rectangle ="<<r1.area()<<endl;
  	cout<<"The perimeter of the Rectangle ="<<r1.perimeter()<<endl;
  	
  	return 0;
  	
  	
  	
  	
  	
  }