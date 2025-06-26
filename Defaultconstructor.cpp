#include <iostream>
using namespace std;

class Message {
	public :
		Message(){
			cout<<"Hello Mian Sunny from Constructor :)"<<endl;
		}
};
int main(){
	Message m;
	return 0;
}