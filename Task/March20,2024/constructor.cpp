
#include <iostream>
using namespace std;
class student{
    public:
    string name;
    int rollno;
    char section;
    student(){
        cout<<"Enter your name :";
        cin>>name;
        cout<<"Enter your Roll Number :";
        cin>>rollno;
        cout<<"Enter your Section :";
        cin>>section;
    }
    void display(){
        cout<<"Your Name: "<<name<<endl;
        cout<<"Your Roll Number: "<<rollno<<endl;
        cout<<"Your Section: "<<section<<endl;
    }
};
int main(){
student s;
s.display();
return 0;
}
