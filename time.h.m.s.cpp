#include<iostream>
#include<string>
using namespace std;
class time{
	private:
		int hours,minut,sec;
	public:
	time();
	time(int h,int m,int s);	
	void display();
	void add(time t1,time t2);
};
time::time():hours(0),minut(0),sec(0){
}
time::time(int h,int m,int s):hours(h),minut(m),sec(s){
}
void time::display(){
	cout<<"Time = "<<hours<<":"<<minut<<":"<<sec<<endl;
}
void time::add(time t1,time t2){
	hours=t1.hours+t2.hours;
	minut=t1.minut+t2.minut;
	sec=t1.sec+t2.sec;
}
int main(){
	time t1(3,12,10);
	time t2(t1);
	time t3; 
	t3.add(t1,t2);
	t3.display();
}