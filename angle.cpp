#include<iostream>
#include<string>
using namespace std;
class angle{
	private:
		int    d;
		float  m;
		char   di;
	public:
		angle()
 {d = 0;
    m = 0.0;
    di = 'N'; }
	      angle(int a,float b, char c);
	      angle(float b,char c ,int a);
	      angle(char c,int a ,float b);
	      void display();
};
angle::angle(int a,float b, char c):d(a),m(b),di(c){
}
angle::angle(float b,char c ,int a):d(a),m(b),di(c){
}
angle::angle(char c,int a ,float b):d(a),m(b),di(c){
}
void angle::display(){
	cout<<" = "<<d<<"\xF8"<<m<<"'"<<di<<endl;
}
int main(){
	angle a[3];
	a[0] = angle(34, 3.5, 'E');
    a[1] = angle(3.4, 'W', 44);  
    a[2] = angle(34, 3.5, 'N');
    for(int i=0;i<3;i++){
    	a[i].display();
	}
}