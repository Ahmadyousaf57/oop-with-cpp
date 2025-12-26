#include <iostream>
using namespace std;
class Vehicle{
    public:
    int Vehicle_Year;
    Vehicle(){
        Vehicle_Year = 0;
    }
    Vehicle(int y){
        Vehicle_Year = y;
    }
    void show(){
        cout<<"Year : "<<Vehicle_Year;
    }
};
class Car:private Vehicle{
    public:
    string make, model;
    Car(){
        make = "0";
        model = "0";
    }
    Car(string m, string n){
        make = m;
        model = n;
    }
    void put_data(){
        cout << "The Vehicle Manufacturing Year is : " << Vehicle_Year <<endl;
        cout << "The Vehicle Make company  is : " << make <<endl;
        cout << "The Vehicle Model is : " << model <<endl;
    }
};
int main(){
    Vehicle car;
    car = Vehicle(2004);
    car.show();
    Car cAr;
    cAr = Car("Honda", "Shappar");
    cAr.put_data();
} 