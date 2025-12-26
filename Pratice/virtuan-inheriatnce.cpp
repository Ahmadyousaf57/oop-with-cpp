#include <iostream>

using namespace std;

class Student {
protected:
    int roll_no;

public:
    void get_roll_no() {
        cout << "Enter roll number: ";
        cin >> roll_no;
    }

    friend void display_roll_no(const Student& s);
};

void display_roll_no(const Student& s) {
    cout << "Roll number: " << s.roll_no << endl;
}

class Test : virtual public Student {
protected:
    float subject1, subject2;

public:
    void get_scores() {
        cout << "Enter marks for subject 1: ";
        cin >> subject1;
        cout << "Enter marks for subject 2: ";
        cin >> subject2;
    }

    void display_scores() const {
        cout << "Marks in subject 1: " << subject1 << endl;
        cout << "Marks in subject 2: " << subject2 << endl;
    }
};

class Sports : virtual public Student {
protected:
    float sports_score;

public:
    void get_sports_score() {
        cout << "Enter sports score: ";
        cin >> sports_score;
    }

    void display_sports_score() const {
        cout << "Sports score: " << sports_score << endl;
    }
};

class Result : public Test, public Sports {
public:
    void display_result() {
        float total = subject1 + subject2 + sports_score;
        display_roll_no(*this);
        display_scores();
        display_sports_score();
        cout << "Total score: " << total << endl;
    }
};

int main() {
    Result student_result;
    student_result.get_roll_no();
    student_result.get_scores();
    student_result.get_sports_score();
    student_result.display_result();

    return 0;
}
