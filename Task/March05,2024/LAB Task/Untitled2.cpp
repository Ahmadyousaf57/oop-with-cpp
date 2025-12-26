#include<iostream>
using namespace std;
class bank{
    public:
    int num;
    string name;
    int balance;
    int withdraw;
    int deposit;
    int remainingbalance;
    void enter(){
        cout<<"Enter the account number : ";
        cin>>num;
        cout<<"Enter the account holder name : ";
        cin>>name;
        cout<<"Enter the balance of account : ";
        cin>>balance;
        cout<<"Enter the amount u want to withdraw : ";
        cin>>withdraw;
        cout<<"Enter the amount u want to deposit : ";
        cin>>deposit;

    }
    void show(){
        cout<<"The account number is : "<<num<<endl;
        cout<<"The account holder name is : "<<name<<endl;
        cout<<"The account balance is : "<<balance<<endl;
        cout<<"The amount u deposited is : "<<deposit<<endl;
        remainingbalance=balance-withdraw;
        cout<<"Your remaining balance is : "<<remainingbalance<<endl;
    }
};
int main(){
    bank user;
    user.num;
    user.name;
    user.balance;
    user.enter();
    user.show(); 
}
