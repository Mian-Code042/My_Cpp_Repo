 /*Amilk carton can hold 3.78 liters of milk. Each morning, a dairy farm ships
 cartons of milk to a local grocery store. The cost of producing one liter of
 milk is $0.38, and the profit of each carton of milk is $0.27. Write a
 program that does the following:

 a.Prompts the user to enter the total amount of milk produced in the
 morning.
 b.Outputs the number of milk cartons needed to hold milk. (Round your
 answer to the nearest integer.)
 c.Outputs the cost of producing milk.
 d.Outputs the profit for producing milk.*/
 #include <iostream>
 #include <cmath>
 using namespace std;
int main(){
	const double MILK_PER_CARTON = 3.78;
	const double cost_per_litre = 0.38;
	const double profit_per_Carton = 0.27;
	double totalMilk;
	double t_carton_needed;
	
	cout<<"Enter the Amount of Milk Produced in Morning in litres : ";
	cin>>totalMilk;
	t_carton_needed = (totalMilk/MILK_PER_CARTON);
	double total_Cartons=round(t_carton_needed);
	cout<<"Number of Cartons Needed to store "<<totalMilk<<"  Litre Milk is : "<<total_Cartons<<endl;
	double total_cost_of_producing = cost_per_litre*totalMilk;
	cout<<"The total Cost of Producing "<<totalMilk<<"  Litre Milk is : $"<<total_cost_of_producing<<endl;
	double total_Profit = profit_per_Carton*totalMilk;
	cout<<"The total Profit of Producing "<<totalMilk<<"  Litre Milk is : $"<<total_Profit<<endl;
	return 0;
	
}
 
 
 
 
 