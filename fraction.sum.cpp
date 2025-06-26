#include<iostream>
#include<string>
using namespace std;
class frac{
	private:
		int num,den;
	public:
	     frac():num(0),den(0){
		 }	
		 void add(int n1,int d1,int n2,int d2);
};
void  frac::add(int n1,int d1,int n2,int d2){
	int result_num = n1 * d2 + n2 * d1;
    int result_den = d1 * d2;
    cout << "\n\nThe Sum Of Two Fractions is: " << result_num << "/" << result_den << endl;
}
int main(){
	frac f1;
	int n1,n2,d1,d2,a;
	do{
		cout<<"Enter Fraction no 1 value : n/d :\n Enter Numerator:";cin>>n1;cout<<"Enter Denominator: ";cin>>d1;
		cout<<"Enter Fraction no 2 value : n/d :\n Enter Numerator:";cin>>n2;cout<<"Enter Denominator: ";cin>>d2;
        f1.add(n1,d1,n2,d2);
        cout<<"\nPress 0 to get out or press any other integer to add again :";cin>>a;
	}while(a!=0);
}