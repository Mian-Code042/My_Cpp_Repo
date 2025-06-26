/* Write a program that prompts the user to enter the weight of a person in
 kilograms and outputs the equivalent weight in pounds. Output both the
 weights rounded to two decimal places. (Note that 1 kilogram ¼ 2.2
 pounds.) Format your output with two decimal places.*/
 
 #include <iostream>
 #include <iomanip>
 using namespace std;
 
 int main(){
 	double weight;
 	
 	const double Kg = 2.2 ;
 	cout<<"Enter the weight of the Person in kilograms :";
 	cin>>weight;
 	double pounds=weight*Kg;
 	cout<<fixed<<setprecision(2)<<endl;
 	cout<<"The weight you Entered in Kilograms is : "<<weight<<"Kilogram"<<endl;
 	cout<<"The weight in Pounds ="<<pounds<<endl;
 	return 0;
 	
	  }