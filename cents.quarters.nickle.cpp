 #include<iostream>
 using namespace std;

 const int HALF_DOLLAR=50;
 const int QUARTER =25;
 const int DIME=10;
 const int NICKEL=5;
  int main()
 {
 
 
 int change;
 
 cout << "Enter change in cents: ";
 cin >> change;
 cout << endl;
 cout << "The change you entered is " << change
 << endl;
 cout << "The number of half-dollars to be returned "
 << "is " << change / HALF_DOLLAR
 << endl;
 change = change % HALF_DOLLAR;
 cout << "The number of quarters to be returned is "
 << change / QUARTER << endl;
 change = change % QUARTER;
 cout << "The number of dimes to be returned is "
 << change / DIME << endl;
 change = change % DIME;
 cout << "The number of nickels to be returned is "
 << change / NICKEL << endl;
 change = change % NICKEL;
 cout << "The number of pennies to be returned is "
 << change << endl;
 return 0;
}