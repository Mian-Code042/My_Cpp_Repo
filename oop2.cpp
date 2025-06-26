#include <iostream>
using namespace std;

class Int{
	public:
	int Int(){
		int IntOne=0;
		int IntTwo=0;
		cout<<"UN-IN IntOne = "<<IntOne<<endl;
		cout<<"UN-IN IntTwo = "<<IntTwo<<endl;
	}
	
	int Int(int x) {
	   int a = x;
	   int sum=IntOne+IntTwo;
	   cout<<"The SUM of UN-IN Int's : "<<sum<<endl;
	   int tsum = sum + a;
	   cout<<"The Total Sum is = "<<tsum<<endl;	
	
	}
	
	return 0;
};

int main(){
	Int n1;
	Int n2;
	n1.Int();
	n2.Int(12);
	
}

