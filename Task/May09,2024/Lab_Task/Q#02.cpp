#include <iostream>
using namespace std;
class teacher;
class student;
class teacher{
    public:
    string name;
    int ID;
    teacher(){
        name = "0";
        ID = 0;
    }
    void get_data(string n, int i){
        name = n;
        ID = i;
    }
    void put_data(){
        cout << "The name of teacher is : " << name << endl;
        cout << "The ID of teacher is : " << ID <<endl;
    }
};
class student:public teacher{
    public:
    int m1, m2, m3;
    public:
    student(){
        m1 = 0;
        m2 = 0;
        m3 = 0;
    }
    void get_data( int m, int n, int o ){
        m1 = m;
        m2 = n;
        m3 = o;
    }
    void put_data(){
        teacher::put_data();
        cout << " Marks1 : " << m1 <<endl;
        cout << " Marks2 : " << m2 <<endl;
        cout << " Marks3 : " << m3 <<endl;
    }
};
int main(){
    teacher s;
    string Name;
    int id;
    cout << "Enter the name of the teacher : ";
    cin >> Name;
    cout << "Enter the ID of the teacher : ";
    cin >> id;
    s.get_data(Name, id);
    s.put_data();
    student S;
    int M1, M2, M3;
    cout << "Enter the Marks1 : ";
    cin >> M1;
    cout << "Enter the Marks2 : ";
    cin >> M2;
    cout << "Enter the Marks3 : ";
    cin >> M3;
    S.get_data(M1, M2, M3);
    S.put_data();
}