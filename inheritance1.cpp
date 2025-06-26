#include <iostream>
using namespace std;

class inherit{
	public:
	void bark(){
		cout<<"Dog Barks"<<endl;
	}
	void cat(){
		cout<<"Cat is an the table"<<endl;
	}
	
};

class eat : public inherit{
	public:
	
	void ali(){
		cout<<" Ali eats food"<<endl;
		
	}
	void Ahmed(){
		cout<<"Ahmed donot eat food"<<endl;
	}
};
int main(){
	eat A1;
	A1.bark();
	A1.cat();
	A1.ali();
	A1.Ahmed();
	
	return 0;
	
}