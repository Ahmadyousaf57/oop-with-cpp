#include <iostream>
using namespace std;
class cylinder{
    public:
    float radius,height;
    void EnterValues(){
        cout<<"Enter radius of the cylinder : ";
        cin>>radius;
        cout<<"Enter height of the cylinder : ";
        cin>>height;
    }
    void DisplayOutput(){
        int pie=3.14;
         cout<<"Volume of cylinder "<<pie*radius*radius*height; 
    }

};
int main(){
    cylinder S;
    S.EnterValues();
    S.DisplayOutput();
}
    
        