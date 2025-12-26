#include<iostream>
using namespace std;
class data{
	public:
	string name;
	int registrationnumber;
	float percentage;
    void enterdata(){
	cout<<"Enter the name of Student  : ";
	cin>>name;
	cout<<"Enter the registration number of Student 1 : ";
	cin>>registrationnumber;
	cout<<"Enter the percentage of Student 1 : ";
	cin>>percentage;
}
    void displaydata(){
    	cout<<"The name of student is : "<<name<<endl;
    	cout<<"The registration number of student is : "<<registrationnumber<<endl;	
		cout<<"The percentage of student is : "<<percentage<<endl;
	}
};
int main(){
	data student;
	student.enterdata();
	student.displaydata();

}