 //1 metric ton = 2205pounds
 //enter ammount of rice in pounds in a bag then output the bags required to store 1 metric ton 
 #include <iostream> 
 using namespace std;
 
 int main(){
 	const int Metric_Ton=2205;
 	double rice_in_bag;
 	double t_Bags;
 	
 	cout<<"Enter the Ammount of Rice in Pounds in a Bag :"<<endl;
 	cin>>rice_in_bag;
 	t_Bags=(Metric_Ton/rice_in_bag);
 	cout<<"The Bags required for One Metric Ton of Rice = 2250 pounds"<<t_Bags<<endl;
 	return 0;
 	
 }