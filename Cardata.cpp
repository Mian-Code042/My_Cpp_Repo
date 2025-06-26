#include <iostream>
using namespace std;

class Car{
	private:
		string model;
		string brand;
		int year;
       public :
	   	Car(string m, string b , int y){
	   	
		   	model = m;
	   		brand = b;
	   		year = y;
	   		
		   }
		   
		   void display(){
		   	
		   	cout<<" Model of a Car :"<<model<<"\n brand of the Car :"<<brand<<"\n year of Car : "<<year<<endl;
		   }	
		
};

int main(){
	Car c1("Civic","Honda",2020);
	c1.display();
	return 0;
}