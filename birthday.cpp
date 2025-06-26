#include <iostream>
#include <string>
#include <iomanip>
#include <chrono>
#include <thread>

using namespace std;

// Function to print with delay
void printWithDelay(string text, int delay = 100) {
    for (char c : text) {
        cout << c << flush;
        this_thread::sleep_for(chrono::milliseconds(delay));
    }
}

int main() {
    string name = "Mian Nisar ul Hassan";
    string date = "27 April";

    cout << "======================================" << endl;
    printWithDelay("Today is a very special day...\n\n", 70);

    this_thread::sleep_for(chrono::milliseconds(500));

    printWithDelay("Wishing you a very Happy Birthday, " + name + "!\n", 80);
    printWithDelay("On this beautiful day, " + date + ",\n", 80);
    printWithDelay("May your dreams come true and your smile shine brighter than ever.\n\n", 80);

    this_thread::sleep_for(chrono::milliseconds(500));

    cout << "======================================" << endl;
    cout << endl;

    // Fancy Birthday Cake
    cout << "        ,,,,,,,,,,,,,\n";
    cout << "       |:H:a:p:p:y:|\n";
    cout << "     _||\n";
    cout << "    |^^^^^^^^^^^^^^^^^|\n";
    cout << "    |:B:i:r:t:h:d:a:y:|\n";
    cout << "    |                 |\n";
    cout << "    ~~~~~~~~~~~~~~~~~~~\n";

    cout << "\nStay blessed always, " << name << "!" << endl;
    cout << "\n======================================" << endl;

    return 0;
}