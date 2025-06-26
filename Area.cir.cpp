#include <iostream>
using namespace std;
class circle{
	public:
		int radius;
		circle(int radius){
			this->radius=radius;
		}
		void area(){
			double area;
			area=(3.14)*(radius)*(radius);
			cout<<"The area of circle is :"<<area;
					}
};
int main(){
	circle c1(5);
	c1.area();
}