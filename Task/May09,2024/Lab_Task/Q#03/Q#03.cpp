#include <iostream>
using namespace std;
class Animal{
    private:
    string species[4];
    int age;
    public:
    Animal(string s, int a){
        species = s;
        age = a;
    }
    void display(){
        cout << "The specie of animal is : " << species << endl ;
        cout << "The age of the animal is : " << age << endl ;
    }
};
class mamal