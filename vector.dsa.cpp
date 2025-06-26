#include <iostream>
#include <vector>
using namespace std;

/*int main(){
	vector<int> vec = {1,2,3};
	cout<<vec[0]<<endl;
	return 0;
}*/



/*int main(){
	vector<int> vec(5,1);   // WHERE 5 (n) show the number of vectors and 1 ki place show krti ha k kia chez hum ny print krani ha 5(n) position pyy
	cout<< vec[0]<<endl;   // Five times 1 will be printed on each position 
	cout<< vec[1]<<endl;
	cout<< vec[2]<<endl;
	cout<< vec[3]<<endl;
	cout<< vec[4]<<endl;
	
	return 0;
}*/




 /*   int main(){                               // We Use special type of loop called " for each " loop for vectors
	vector<char> vec={'a','b','c','d','e'};
	
  cout<<"Size ="<< vec.size() <<endl;             //Vector FUNCTION to get Size of the Vector "vec.size()"
  
  
	vec.push_back(25);                               // Vector Function to increase size of vectors "vec.push_back(25)"  
	                                                 
// TO GET VALUE 25 PASSING THROUGH FUNCTION	WE HAVE TO CHANGE DATATYPE FROM char TO int 
	
	cout<<"After PUSH BACK FUNCTION Size ="<<vec.size()<<endl;

	for(char val : vec){
		cout<<val<<endl;
	}                   
	return 0;
	}*/


/*int main(){
		vector<int> vec(5,1);   
	
	for(int i : vec)
	cout<<i<<endl; 
}*/



	
/* int main(){
 	vector<string> vec={"Ali","Ahmed","Usman","Hina","Sawaira","Ayesha","Nisar","Subhan"};
 	for(string names : vec){
 		cout<< names<<endl;
 		
	 }
	 return 0;
}*/



int main(){
	vector<int> vec;
	
	cout<<"Size at start "<<vec.size()<<endl;
	vec.push_back(25);
	vec.push_back(65);              // push_back vector function used to add value at last of the vector
	vec.push_back(36);
	
	 cout<<"Size After push_back Function = "<< vec.size() <<endl;        // vector function to get Size of vector
	
	cout<<vec.front()<<" -> First Value using front function"<<endl;      // front Function use to display first value in the vector
	
	cout<<vec.back()<<" -> Last Value before pop_back function applied using back function"<<endl;       // back Function use to display last value in the vector
	
	
	
	vec.pop_back(); // Last value from vector delted using this function //  36 will be deleted
	
	cout<<"pop_back Function Executed"<<endl;
	
    cout<<"After pop back function Size = "<<vec.size()<<endl;
        
	
	for(int val : vec){
		cout<<val<<" Remaining"<<endl;
	}
	
	    cout<< vec.at(0)<<" Value accessed by using at function"<<endl;
	  
        cout<< vec.at(1)<<" Value accessed by using at function"<<endl;
        
        cout<< vec.at(2)<<"Value accessed by using at function"<<endl; // This give error value not showed because value had deleted using pop_back function
	
	return 0;
}