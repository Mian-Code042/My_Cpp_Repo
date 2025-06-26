#include <iostream>
using namespace std;

     const double CENTIMETERS_PER_INCH = 2.54;
     const int INCHES_PER_FOOT = 12;
	
int main(){
	int feet;
	int inches;
	int totalInches;
	double centimeters;
//	cout<<"Enter the feet in length : ";
//	cin>>feet;
//  cout<<"Enter the inches in length : ";
//	cin>>inches;
     cout<<"Enter one integer for feet and one for inches in length"<<endl;
     cin>>feet>>inches;
      cout << "The numbers you entered are " << feet
 << " for feet and " << inches
 << " for inches. " << endl;
	totalInches=(feet*INCHES_PER_FOOT)+inches;
	cout<<"The total Inches of given lenght are :"<<totalInches<<endl;
	double length=CENTIMETERS_PER_INCH*totalInches;
	
	cout<<"The Total Length in Centimeter is :"<<length<<"  Centimeter"<<endl;
	return 0;
	
}