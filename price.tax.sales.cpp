#include <iostream>
using namespace std;

int main(){
	double originalPrice,markupPercent,taxRate;
	cout<<"Enter the original price of product :";
	cin>>originalPrice;
	cout<<"Enter the Mark Up percent ";
	cin>>markupPercent;
	cout<<"Enter the TAX Rate";
	cin>>taxRate;
	
	double markupAmount=(markupPercent/100)*originalPrice;
	double sellingPrice=originalPrice+markupAmount;
	
	double salesTax = (taxRate/100)*sellingPrice;
	double finalPrice = salesTax + sellingPrice;
	 cout << "\n--- Price Details ---" << endl;
    cout << "Original Price: $" << originalPrice << endl;
    cout << "Markup Percentage: " << markupPercent << "%" << endl;
    cout << "Selling Price: $" << sellingPrice << endl;
    cout << "Sales Tax Rate: " << taxRate << "%" << endl;
    cout << "Sales Tax: $" << salesTax << endl;
    cout << "Final Price (with tax): $" << finalPrice << endl;

    return 0;
}