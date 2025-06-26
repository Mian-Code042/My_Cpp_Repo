#include <iostream>
using namespace std;

class Counter{
	private:
		double count;
		public:
			Counter(){
				count=0;
			
			}
			void increment(){
				count++;
			}
			void display(){
				cout<<"Count :"<<count<<endl;
				
			}
			
};
int main(){
	Counter c1;
	c1.increment();   // Jitni dafa hmary pass constructor call hu ga utni dafa increment oprator lge ga.
	c1.increment();
	c1.increment();
	c1.display();
	
	
}