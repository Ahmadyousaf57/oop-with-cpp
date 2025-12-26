#include<iostream>
using namespace std;
class employee{
    public:
    string name;
    string company;
    int age;
    void dataentry(){
    cout<<"Enter the name of 1st employee : ";
    cin>>name;
    cout<<"Enter the name of company : ";
    cin>>company;
    cout<<"Enter the age of 1st employee : ";
    cin>>age;
    }
    void showdata(){
        cout<<"The name of 1st employee is : "<<name<<endl;
        cout<<"The name of company is : "<<company<<endl;
        cout<<"The age of 1st employee is : "<<age<<endl;
    }
};
int main(){
    employee e1;
    e1.name;
    e1.company;
    e1.age;
    e1.dataentry();
    e1.showdata();

}
