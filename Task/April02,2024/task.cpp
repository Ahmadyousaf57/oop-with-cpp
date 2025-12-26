#include <iostream>
using namespace std;
class student{
    public:
    int marks;
    string name;
    void GETDATA(){
        cout<<"ENTER THE NAME : ";
        cin>>name;
        cout<<"ENTER MARKS : ";
        cin>>marks;
        }
    int perc(){
        return marks*100/500;
    }
    void display(){
        cout<<name<<" "<<marks<<" "<<perc()<<endl;
    }
};
int main(){
    int size =5;
    student *ptr= new student[size];
    student *temp = ptr;
    for (int i=0; i<size; i++){
        ptr->GETDATA();
        ptr++;
    }
    ptr = temp;
    for (int i=0; i<size; i++){
        ptr->display();
        ptr++;
    }
}