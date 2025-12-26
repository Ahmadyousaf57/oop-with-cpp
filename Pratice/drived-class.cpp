#include <iostream>
#include <string>

using namespace std;

// Base class: Student
class Student {
protected:
    string name;
    int roll_no;

public:
    void getdata() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> roll_no;
    }

    void putdata() const {
        cout << "Name: " << name << "\nRoll Number: " << roll_no << endl;
    }
};

// Derived class: Test (from Student)
class Test : public Student {
protected:
    float subject1, subject2;

public:
    void gettest() {
        cout << "Enter marks for subject 1: ";
        cin >> subject1;
        cout << "Enter marks for subject 2: ";
        cin >> subject2;
    }

    void puttest() const {
        cout << "Marks in Subject 1: " << subject1 << "\nMarks in Subject 2: " << subject2 << endl;
    }
};

// Derived class: Result (from Test)
class Result : public Test {
public:
    void displayresult() const {
        float total = subject1 + subject2;
        putdata();
        puttest();
        cout << "Total Marks: " << total << endl;
    }
};

int main() {
    Result student_result;
    
    student_result.getdata();
    student_result.gettest();
    student_result.displayresult();

    return 0;
}
