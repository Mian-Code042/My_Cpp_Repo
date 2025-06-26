#include <iostream>
 #include <cmath>
 using namespace std;
int main(){
	const double MILK_PER_CARTON = 3.78;
    double cost_per_litre; 
    double profit_per_Carton ;
	double totalMilk;
	double t_carton_needed;
	
	cout<<"Enter the Amount of Milk Produced in Morning in litres : ";
	cin>>totalMilk;
	t_carton_needed = (totalMilk/MILK_PER_CARTON);
	double total_Cartons=round(t_carton_needed);
	cout<<"Number of Cartons Needed to store "<<totalMilk<<"  Litre Milk is : "<<total_Cartons<<endl;
	cout<<"Enter the cost of milk per litre :";
	cin>>cost_per_litre;
	double total_cost_of_producing = cost_per_litre*totalMilk;
	cout<<"The total Cost of Producing "<<totalMilk<<"  Litre Milk is : $"<<total_cost_of_producing<<endl;
	cout<<"Enter the profit per Carton :";
	cin>>profit_per_Carton;
	double total_Profit = profit_per_Carton*totalMilk;
	cout<<"The total Profit of Producing "<<totalMilk<<"  Litre Milk is : $"<<total_Profit<<endl;
	return 0;
	
}