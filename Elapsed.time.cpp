#include <iostream>
using namespace std;

int main(){
	int totalseconds;
	cout<<"Enter the Elapsed Time in Seconds :";
	cin>>totalseconds;
	cout<<"The elapsed time you entered in seconds ="<<totalseconds<<" Seconds"<<endl;
	int hours = (totalseconds / 3600) ;
    int minutes = (totalseconds % 3600) / 60;
    int seconds = totalseconds % 60;

    cout << "Time:\n" << hours << " hours \n "
         << minutes << " minutes \n "
         << seconds << " seconds." << endl;

    return 0;
}
