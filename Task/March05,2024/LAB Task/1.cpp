#include<iostream>
using namespace std;
class bank{
	public:
	int accountnum;
	string name;
	float balance;
	int withdraw;
	void enterdata(){
		cout<<"Enter Account number : ";
		cin>>accountnum;
		cout<<"Enter User name : ";
		cin>>name;
		cout<<"Enter Balance of account : ";
		cin>>balance;
	}
	void displaydata(){
		cout<<"Account number : "<<accountnum<<endl;
		cout<<"User name : "<<name<<endl;
		cout<<"Account Balance : "<<balance<<endl;
	} 
	void withdrawdata(){
		cout<<"Enter amount to withdraw : ";
		cin>>withdraw;	
		int depositamount=balance-withdraw;
		cout<<"Your remaining amount is : "<<depositamount;
	}
};
int main(){
	bank b;
	b.enterdata();
	b.displaydata();
	b.withdrawdata();
}
