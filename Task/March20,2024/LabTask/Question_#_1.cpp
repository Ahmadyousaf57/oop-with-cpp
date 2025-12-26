#include <iostream>
using namespace std;
class employee{
    private:
    int ID;
    string name;
    public:
    employee(int id, string n){
        ID=id;
        name=n;
    }
    void display(){
        cout<<"Employee ID is : "<<ID<<endl;
        cout<<"Employee Name is : "<<name<<endl;
    }
};
int main(){
    employee e1(213, "Nasar");
    e1.display();
    employee e2(3231, "Muneeb");
    e2.display();
return 0;
}