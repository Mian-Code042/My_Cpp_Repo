#include <iostream>
#include <string>
using namespace std;
class student{
	public:
	string name="Ali";
	int r=675;
	char gender='M';
	char grade='A';
};
  int main()
  {
  	student properties;
    
  	cout<<"The name of student :"<<properties.name<<"\n Roll number :"<<properties.r<<"\n Gender of student :"<<properties.gender<<"\n Student grade :"<<properties.grade<<endl;
  	
  	student *Ahmed=new student();
  	Ahmed->name = "Ahmed Khan";
  	Ahmed->r = "676";
  	Ahmed-> gender = 'M';
  	Ahmed-> grade= 'A';
  	
  	cout<<Ahmed->name<<"\n"<<Ahmed->r<<"\n"<<Ahmed-> gender<<"\n"<<Ahmed-> grade<<endl;
  	
	  return 0;
  	
  	
  }