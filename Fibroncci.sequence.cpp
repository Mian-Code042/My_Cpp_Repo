#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if(n<2){
    	cout<<"The term in Fibonacci sequence at this position is : 1"<<endl; 
	}else{
		
    int result = n + (n - 1);
    cout <<"The term in Fibonacci sequence at position "<< n <<" is "<<result << endl;

	}

    return 0;
}
