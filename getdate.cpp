#include<iostream>
#include<string>
using namespace std;
class date{
	private:
		int day,month,year;
	public:
	date();
	void getdate();
	void display();	
};
date::date():day(0),month(0),year(0){
}
void date::getdate(){
	cout<<"Enter Day:";cin>>day;cout<<"Enter Month:";cin>>month;cout<<"Enter Year:";cin>>year;
}
void date::display(){
	cout<<"The Date you Entered Is : "<<day<<" / "<<month<<" / "<<year<<" ."<<endl;
}
int main(){
	date d1;
	d1.getdate();
	d1.display();
}