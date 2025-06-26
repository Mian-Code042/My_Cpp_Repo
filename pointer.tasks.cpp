//                                      TASK#01


/*#include <iostream>
using namespace std;
int main(){
	string name;
	int age;
	cout<<"Enter the Name of Student : ";
	getline(cin, name);
	cout<<"Enter the Age of Student : ";
    cin>>age;                                  // WE ONLY USE GETLINE WHILE WE ARE USING STRING DATATYPE
    cin.ignore();
	cout<<"NAME : "<<name<<"\n"<<"AGE : "<<age<<endl;
	return 0;
	
}*/

//                                     TASK#02



/*#include <iostream>
using namespace std;
int main(){
	int* p=new int;
	cout<<"Enter an Integer Number : ";
	cin>>*p;
	if(cin.fail()){
		cout<<"INVALID INPUT ! Please Enter an Integer Value Thanks ";
		cin.clear();
	}else{
		cout<<"The Number you Enter is : "<<*p<<endl;
	}
	delete p;
	return 0;
}*/

//                                     TASK#03



/*#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
	int size;
	cout<<"How many Numbers you want to enter : ";
	cin>>size;
	if(cin.fail()){
		cout<<"INVALID INPUT ! Please Enter an Integer Value Thanks ";
		cin.clear();
		abort();
        }
	int* numbers=new int[size];
	cout<<"Enter "<<size<<" integer values :"<<endl;
	for(int i=0;i<size;++i){
	if(cin.fail()){
		cout<<"INVALID INPUT ! Please Enter an Integer Value Thanks ";
		cin.clear();
		abort();
        }
		cout<<"Number "<<i+1<<" : ";
		cin>>numbers[i];
		
	}
	cout<<"Numbers You Entered :"<<"\n"<<endl;
	for(int i=0;i<size;++i){
		cout<<numbers[i]<<" ";
	}
	cout<<endl;
	delete[] numbers;
	
	}*/
	
//                                     TASK#04



/*#include <iostream>
#include <cstdlib>
using namespace std;

class Book{
	public:
		string name;
		
		Book(string n){
			name=n;
			cout<<"Book "<<name<<" Created!"<<"\n";
		}
		~Book(){
		cout<<"Book "<<name<<" Destroyed!"<<"\n";	
		}	
};	

int main(){
	int n;
	cout<<"Enter the Number of Books : ";
	cin>>n;
	if(cin.fail()){
		cout<<"INVALID INPUT!";
		abort();
	}
		cin.ignore();
	for(int i=0;i<n;++i){
	
		string name;
		cout<<"Enter Name of Book "<<i+1<<":";
		getline(cin, name);
		Book b(name);
	}
	return 0;
}*/

//                                         TASK#05



/*#include <iostream>
#include <cstdlib>
using namespace std;

class Calculator {
public:
    void performOperation() {
        int choice;
        float a, b;

        do {
            cout << "\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Exit\n";
            cout << "Enter choice: ";
            cin >> choice;

            if (choice == 5 || choice != 1,2,3,4) {
                 cout << "Invalid choice";
                 abort();
			}
            cout << "Enter two numbers: ";
            cin >> a >> b;

            switch (choice) {
                case 1: cout << "Result: " << a + b << endl; break;
                case 2: cout << "Result: " << a - b << endl; break;
                case 3: cout << "Result: " << a * b << endl; break;
                case 4:
                    if (b == 0)
                        cout << "Cannot divide by zero"<<endl;
                    else
                        cout << "Result: " << a / b << endl;
                    break;
            }

        } while (true);
    }
};

int main() {
    Calculator calc;
    calc.performOperation();
    return 0;
}*/
//                                         TASK#06


/*#include <iostream>
using namespace std;

class Student {
    string name;
    int rollNo;
    float marks[3];

public:
    Student(string n, int r, float m1, float m2, float m3) {
        name = n;
        rollNo = r;
        marks[0] = m1;
        marks[1] = m2;
        marks[2] = m3;
    }

    void displayResult() {
        float total = marks[0] + marks[1] + marks[2];
        float percentage = total / 3.0;
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Total: " << total <<"/300"<< endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

int main() {
    string name;
    int roll;
    float m1, m2, m3;

    cout << "Enter Name: ";
    getline(cin, name);
    cout << "Enter Roll No: ";
    cin >> roll;
    cout << "Enter Marks obtained from '100' in 3 Subjects: ";
    cin >> m1 >> m2 >> m3;

    Student s(name, roll, m1, m2, m3);
    s.displayResult();

    return 0;
}*/

//                                         TASK#07



/*#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    void input() {
        cin.ignore();
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Age: ";
        cin >> age;
    }

    void display() {
    	cout<<"------THE DATA OF STUDENT-----"<<endl;
        cout <<"Name of Student : " << name <<endl;
		cout<<"Age of Student : " << age << endl;
    }
};

class ClassRoom {
    Student* students;
    int count;

public:
    ClassRoom(int n) {
        count = n;
        students = new Student[n];
    }

    void inputStudents() {
        for (int i = 0; i < count; i++) {
            cout << "\nStudent " << i + 1 << ":\n";
            students[i].input();
        }
    }

    void displayStudents() {
        for (int i = 0; i < count; i++) {
            students[i].display();
        }
    }

    ~ClassRoom() {
        delete[] students;
    }
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    ClassRoom cr(n);
    cr.inputStudents();
    cr.displayStudents();

    return 0;
}*/
