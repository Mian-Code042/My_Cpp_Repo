#include <iostream>
#include <iomanip>  

using namespace std;

class Date {
private:
    int day;
    int month;
    int year;

public:

    void setDay(int d) { day = d; }
    void setMonth(int m) { month = m; }
    void setYear(int y) { year = y; }

    int getDay() const { return day; }
    int getMonth() const { return month; }
    int getYear() const { return year; }

    void displayDate() const {
        cout << setfill('0') << setw(2) << day << "/"
             << setfill('0') << setw(2) << month << "/"
             << year << endl;
    }
};

int main() {
    Date dates[5];

    dates[0].setDay(25); dates[0].setMonth(12); dates[0].setYear(1876);
    dates[1].setDay(9);  dates[1].setMonth(11); dates[1].setYear(1877);
    dates[2].setDay(21); dates[2].setMonth(4);  dates[2].setYear(1938);
    dates[3].setDay(14); dates[3].setMonth(8);  dates[3].setYear(1947);
    dates[4].setDay(11); dates[4].setMonth(9);  dates[4].setYear(1948);

    cout << "Stored Dates:" << endl;
    for (int i = 0; i < 5; ++i) {
        dates[i].displayDate();
    }

    return 0;
}
