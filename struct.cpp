#include <iostream>
using namespace std;

struct houseType {
	string style;
	int numOfbedrooms,numOfbathrooms,numOfcarsgarage;
	double yearbuild;
	double finishedsquarefootage;
	int price;
	float tax;
};

int main(){
	houseType newHouse;
	
	newHouse.style="Colonial";
	newHouse.numOfbedrooms=3;
	newHouse.numOfbathrooms=2;
	newHouse.numOfcarsgarage=2;
	newHouse.yearbuild=2007;
	newHouse.finishedsquarefootage=2250;
	newHouse.price=29000000;
	newHouse.tax=5000.50;
	
	cout<<"Style = "<<newHouse.style<<endl;
	cout<<"Number of Bed Rooms = "<<newHouse.numOfbedrooms<<endl;
	cout<<"Number of Bath Rooms = "<<newHouse.numOfbathrooms<<endl;
	cout<<"Number of Cars Garage = "<<newHouse.numOfcarsgarage<<endl;
	cout<<"Year of Build ="<<newHouse.yearbuild<<endl;
	cout<<"Square Footage = "<<newHouse.numOfcarsgarage<<endl;
	cout<<"Price of house = "<<newHouse.price<<endl;
	cout<<"Tax of House = "<<newHouse.tax<<endl;
	
	return 0;
	
	
	
	
	
	
	
	
}