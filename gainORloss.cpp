#include <iostream>
using namespace std;

int main(){
	int shares;
	double purchasePrice;
	double sellingPrice;
	
	cout<<"Enter the Amount of shares :";
	cin>>shares;
	cout<<"Enter the Purchase Price of Shares :";
	cin>>purchasePrice;
	cout<<"Enter the Selling Price of Shares :";
	cin>>sellingPrice;
	
	const double serviceRate=0.015;
	
	double total_Buy= shares*purchasePrice;
	double buyService=total_Buy*serviceRate;
	double totalInvestment=total_Buy+buyService;
	double totalSell=shares*sellingPrice;
	double sellService = totalSell*serviceRate;
	double amountReceived=totalSell-sellService;
	double gainOrLoss = amountReceived-totalInvestment;
	
	
    cout << "\nTotal Amount Invested: Rs. " << totalInvestment << endl;
    cout << "Total Service Charges: Rs. " << (buyService + sellService) << endl;
    cout << "Amount Received After Selling: Rs. " << amountReceived << endl;

    if (gainOrLoss > 0)
        cout << "Net Gain: Rs. " << gainOrLoss << endl;
    else if (gainOrLoss < 0)
        cout << "Net Loss: Rs. " << -gainOrLoss << endl;
    else
        cout << "No Gain or Loss." << endl;

    return 0;
}
	
