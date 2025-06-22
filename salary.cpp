/*You found an exciting summer job for five weeks. It pays, say, $15.50
 per hour. Suppose that the total tax you pay on your summer job
 income is 14%. After paying the taxes, you spend 10% of your net
 income to buy new clothes and other accessories for the next school
 year and 1% to buy school supplies. After buying clothes and school
 supplies, you use 25% of the remaining money to buy savings bonds.
 For each dollar you spend to buy savings bonds, your parents spend
 $0.50 to buy additional savings bonds for you. Write a program that
 prompts the user to enter the pay rate for an hour and the number
 of hours you worked each week. The program then outputs the
 following:
 a.Your income before and after taxes from your summer job.
 b.The money you spend on clothes and other accessories.
 c.The money you spend on school supplies. 
 d.The money you spend to buy savings bonds. 
 e.The money your parents spend to buy additional savings bonds for 
 you*/ 
 
#include <iostream>
#include <iomanip> // for setprecision
using namespace std;

int main() {
    double hourlyRate, hoursPerWeek;

    cout << "Enter your hourly pay rate: $";
    cin >> hourlyRate;

    cout << "Enter the number of hours you work each week: ";
    cin >> hoursPerWeek;

    double grossIncome = hourlyRate * hoursPerWeek * 5;

    double tax = 0.14 * grossIncome;
    double netIncome = grossIncome - tax;

    double clothes = 0.10 * netIncome;
    double supplies = 0.01 * netIncome;

    double remaining = netIncome - clothes - supplies;

    double savingsBonds = 0.25 * remaining;
    double parentsContribution = 0.50 * savingsBonds;

    cout << fixed << setprecision(2);
    cout << "\n--- Summary ---" << endl;
    cout << "Income before tax: $" << grossIncome << endl;
    cout << "Income after tax: $" << netIncome << endl;
    cout << "Money spent on clothes and accessories: $" << clothes << endl;
    cout << "Money spent on school supplies: $" << supplies << endl;
    cout << "Money spent on savings bonds: $" << savingsBonds << endl;
    cout << "Money your parents spent on savings bonds: $" << parentsContribution << endl;

    return 0;
}

