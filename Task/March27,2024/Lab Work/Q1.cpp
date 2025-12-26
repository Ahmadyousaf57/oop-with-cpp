#include <iostream>
using namespace std;
class Student{
   private:
   string name;
   int age;
   public:
   Student(){
    name = "0";
    age = 0;
   }
    Student (string n, int a){
        name=n;
        age=a;
    }
    Student( Student &t){
        name=t.name;
        age=t.age;
    }
    void showall(){
        cout<<"Name Of Student: "<<name<<endl;
        cout<<"Age Of Student: "<<age<<endl;
    }
};
int main(){
    Student s1("ahmad", 19);
    s1.showall();
    Student s2(s1);
    s2.showall();
return 0;
}
