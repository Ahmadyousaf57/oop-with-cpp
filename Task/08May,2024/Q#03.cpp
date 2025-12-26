#include <iostream>
using namespace std;
class Course;
void Schedule(Course h);
class Course{
    string name, instructor, timing;
    int ID, cr_hours;
    public:
    Course(){
        name = "0";
        instructor = "0";
        timing = "0";
        ID = 0;
        cr_hours = 0;

    }
    Course(string n, int id, string i, string t, int c){
        name = n;
        instructor = i;
        timing = t;
        ID = id;
        cr_hours = c;
    }
    friend void Schedule(Course c);
};
void Schedule(Course h){
    cout << "Schedule :" << endl;
    cout << "Credit Hours of the Subject are : " << h.cr_hours << endl;
    cout << "Timing of Subject on its Day is : " << h.timing << endl;
}
int main(){
    Course C;
    string Name, Instructor, Timing;
    int ID, Credit_Hours;
    cout << "Enter The name of Course : ";
    cin >> Name;
    cout << "Enter The ID : ";
    cin >> ID;
    cout << "Enter The name of Course Instructor : ";
    cin >> Instructor;
    cout << "Enter Timing of Course on its Day : ";
    cin >> Timing;
    cout << "Enter The Credit Hours of Subject : ";
    cin >> Credit_Hours;
    C = Course(Name, ID, Instructor, Timing, Credit_Hours);
    Schedule(C);
}