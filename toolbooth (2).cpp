 #include<iostream>
#include<string>
using namespace std;
class tollbooth{
	private:
		int totnocars;
		double totamount;
	public:
	   tollbooth();
	   void payingcars();
	   void nopaycar();
	   void display();	
};
tollbooth::tollbooth():totnocars(0),totamount(0){
}
void tollbooth::payingcars(){
	totnocars+=1;
	totamount+=0.50;
}
void tollbooth::nopaycar(){
	totnocars+=1;
}
void tollbooth::display(){
	cout<<"Total Cars Passing through TollBooth is : "<<totnocars<<endl;
	cout<<"Total Amount Collected is : "<<totamount<<"$"<<endl;
}
int main(){
	tollbooth a1;
	int a;
	cout<<"Enter 1 if Car is Paying and 0 if not paying toll tax:\n Press 5 to stop adds and display print:\n";
	do{ cin>>a;
	if(a==1)
		a1.payingcars();
	else if (a==0) a1.nopaycar();
}while(a!=5);
a1.display();
}
