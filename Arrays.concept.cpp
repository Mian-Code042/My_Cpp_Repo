#include <iostream>
using namespace std;

int main() {
    string names[5];
    float averages[5];
    char grades[5];
    int marks[5][5];

    int topperIndex = 0;

    for (int i = 0; i < 5; i++) {
        cout << "Enter name of student " << i + 1 << ": ";
        cin >> names[i];

        int total = 0;
        cout << "Enter 5 subject marks:\n";
        for (int j = 0; j < 5; j++) {
            cin >> marks[i][j];
            total += marks[i][j];
        }

        averages[i] = total / 5.0;

        if (averages[i] >= 85)
            grades[i] = 'A';
        else if (averages[i] >= 70)
            grades[i] = 'B';
        else if (averages[i] >= 55)
            grades[i] = 'C';
        else if (averages[i] >= 40)
            grades[i] = 'D';
        else
            grades[i] = 'F';

        if (averages[i] > averages[topperIndex]) {
            topperIndex = i;
        }
    }

    cout << "Topper Student:";
    cout << "Name: " << names[topperIndex] << endl;
    cout << "Average: " << averages[topperIndex] << endl;
    cout << "Grade: " << grades[topperIndex] << endl;

    return 0;
}
