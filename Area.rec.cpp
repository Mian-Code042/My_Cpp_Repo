#include <iostream>
using namespace std;

class rectangle {
	public :
		int length,width;
		
		rectangle(){
			length = 0;
			width = 0;
		}
		void display(){
			cout<<" Length = "<<length<<endl;
			cout<<" Width ="<<width;
		}
	};
	int main(){
		rectangle r1;
		r1.display();
		return 0;
	}