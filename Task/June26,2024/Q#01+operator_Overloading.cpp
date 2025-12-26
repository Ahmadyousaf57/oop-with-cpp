#include <iostream>
using namespace std;
class Rational_Number{
    public:
    double numerator, denominator;
    int Get_data(int x, int y){
        numerator = x;
        denominator = y;
    } 
    void Show_data(){
        cout << " Numerator : " << numerator << endl; 
        cout << " Denomenator : " << denominator << endl; 
    }
    void Add_data(){
        
    }
    Rational_Number operator+(Rational_Number temp){
        Rational_Number X;
        X.numerator = numerator + temp.numerator;
        X.denominator = denominator + temp.denominator;
        return X;
    }
};
int main(){
    Rational_Number obj1, obj2;
    int a=1, b=2, c=3, d=4;
    obj1.Get_data(a, b);
    obj1.Show_data();
    obj2.Get_data(c, d);
    obj2.Show_data();
    Rational_Number obj3 = obj2 + obj1;
    obj3.Show_data();
    
    
return 0;
}