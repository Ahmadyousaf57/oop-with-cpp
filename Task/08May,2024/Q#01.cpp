#include <iostream>
using namespace std;
void Library(string b){
    string *ptr = new string[5];
    string *temp = ptr;
    ptr[0] = "Calculus";    //2nd Semester Subjects
    ptr[1] = "OOP";
    ptr[2] = "CPS";
    ptr[3] = "DS";
    ptr[4] = "DLD";
    for( int i=0 ; i<5 ; i++){
        if(ptr[i] == b){
            cout << "This Book is Available :), Proceed towards reception" << endl;
            delete[] ptr;
        }
    }      
    delete[] ptr;
    cout<<"This book is not available :(" << endl; 
}
class Book{
    public:
    const int is_Available(string n){
        Library(n);
    }
};
int main(){
    Book obj;
    string B;
    cout << " Enter the name of the book u want to avail : ";
    cin >> B;
    obj.is_Available(B);
}
