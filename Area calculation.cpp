#include <iostream>
using namespace std;

//Area of Rectangle = length * width

//Area of Circle = PI*r*r

/*const float PI=3.14;
int main(){
	
	float area,radius;
	cout<<"Enter the radius of the circle :";
	cin>>radius;
	cout<<endl;
		area = PI*radius*radius;
	cout<<"The Area of the Circle is :"<<area<<endl;
	return 0;
	
}*/


int main() {
    float base, height, area;
    cout << "Enter base and height of triangle: ";
    cin >> base >> height;

    area = 0.5 * base * height;
    cout << "Area of triangle = " << area << endl;

    return 0;
}


