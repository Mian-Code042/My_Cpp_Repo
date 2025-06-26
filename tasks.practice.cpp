#include <iostream>
#include <string>
using namespace std;

// ---------- Static Array Problems ----------

void staticArrayInputDisplay() {
    int arr[10];
    cout << "Enter 10 integers: ";
    for (int i = 0; i < 10; i++)
        cin >> arr[i];
    cout << "Values: ";
    for (int i = 0; i < 10; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void findMaxMin() {
    int arr[5];
    cout << "Enter 5 integers: ";
    for (int i = 0; i < 5; i++)
        cin >> arr[i];
    int max = arr[0], min = arr[0];
    for (int i = 1; i < 5; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }
    cout << "Max: " << max << ", Min: " << min << endl;
}

void countEvenOdd() {
    int arr[10], even = 0, odd = 0;
    cout << "Enter 10 numbers: ";
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
        if (arr[i] % 2 == 0) even++;
        else odd++;
    }
    cout << "Even: " << even << ", Odd: " << odd << endl;
}

void reverseArray() {
    int arr[5], rev[5];
    cout << "Enter 5 elements: ";
    for (int i = 0; i < 5; i++) cin >> arr[i];
    for (int i = 0; i < 5; i++) rev[i] = arr[4 - i];
    cout << "Reversed: ";
    for (int i = 0; i < 5; i++) cout << rev[i] << " ";
    cout << endl;
}

void searchInArray() {
    int arr[10], key, index = -1;
    cout << "Enter 10 elements: ";
    for (int i = 0; i < 10; i++) cin >> arr[i];
    cout << "Enter number to search: ";
    cin >> key;
    for (int i = 0; i < 10; i++) {
        if (arr[i] == key) {
            index = i;
            break;
        }
    }
    if (index != -1)
        cout << "Found at index: " << index << endl;
    else
        cout << "Not found" << endl;
}

// ---------- Dynamic Array Problems ----------

void dynamicArraySum() {
    int n, sum = 0;
    cout << "Enter size: ";
    cin >> n;
    int* arr = new int[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    cout << "Sum = " << sum << endl;
    delete[] arr;
}

void averageOfMarks() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    float* marks = new float[n];
    float sum = 0;
    for (int i = 0; i < n; i++) {
        cout << "Enter mark of student " << i + 1 << ": ";
        cin >> marks[i];
        sum += marks[i];
    }
    cout << "Average = " << sum / n << endl;
    delete[] marks;
}

void reverseDynamicArray() {
    int n;
    cout << "Enter size: ";
    cin >> n;
    int* arr = new int[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];
    cout << "Reversed: ";
    for (int i = n - 1; i >= 0; i--) cout << arr[i] << " ";
    cout << endl;
    delete[] arr;
}

void storeStudentNames() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    string* names = new string[n];
    cin.ignore();
    for (int i = 0; i < n; i++) {
        cout << "Enter name of student " << i + 1 << ": ";
        getline(cin, names[i]);
    }
    cout << "Names: ";
    for (int i = 0; i < n; i++) cout << names[i] << ", ";
    cout << endl;
    delete[] names;
}

void sortDynamicArray() {
    int n;
    cout << "Enter size: ";
    cin >> n;
    int* arr = new int[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) swap(arr[i], arr[j]);
        }
    }
    cout << "Sorted: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
    delete[] arr;
}

// ---------- Pointer-Based Problems ----------

void pointerAccessStaticArray() {
    int arr[5] = {1, 2, 3, 4, 5};
    int* ptr = arr;
    for (int i = 0; i < 5; i++) {
        *(ptr + i) += 1;
    }
    cout << "Modified: ";
    for (int i = 0; i < 5; i++) cout << arr[i] << " ";
    cout << endl;
}

void pointerArithmeticDynamicArray() {
    int n;
    cout << "Enter size: ";
    cin >> n;
    int* ptr = new int[n];
    for (int i = 0; i < n; i++) cin >> *(ptr + i);
    for (int i = 0; i < n; i++) cout << *(ptr + i) << " ";
    cout << endl;
    delete[] ptr;
}

int sumUsingPointer(int* arr, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) sum += *(arr + i);
    return sum;
}

int maxUsingPointer(int* arr, int n) {
    int max = *arr;
    for (int i = 1; i < n; i++)
        if (*(arr + i) > max) max = *(arr + i);
    return max;
}

void copyArrayUsingPointers(int* src, int* dest, int n) {
    for (int i = 0; i < n; i++)
        *(dest + i) = *(src + i);
}

int main() {
    // Call any function here to test
    staticArrayInputDisplay();
    findMaxMin();
    countEvenOdd();
    reverseArray();
    searchInArray();
    dynamicArraySum();
    averageOfMarks();
    reverseDynamicArray();
    storeStudentNames();
    sortDynamicArray();
    pointerAccessStaticArray();
    pointerArithmeticDynamicArray();
    
    int arr[5] = {1, 3, 5, 7, 9};
    cout << "Sum using pointer: " << sumUsingPointer(arr, 5) << endl;
    cout << "Max using pointer: " << maxUsingPointer(arr, 5) << endl;

    int* dest = new int[5];
    copyArrayUsingPointers(arr, dest, 5);
    cout << "Copied array: ";
    for (int i = 0; i < 5; i++) cout << dest[i] << " ";
    cout << endl;
    delete[] dest;
    return 0;
}
