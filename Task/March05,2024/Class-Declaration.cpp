#include<iostream>
using namespace std;
class BS{
	public:
		int ID;
		string Name;
};
int main(){
	BS Student1;
	Student1.ID=100;
	Student1.Name="Nasar";
	cout<<"Student 1 ID : "<<Student1.ID<<endl;
	cout<<"Student 1 Name : "<<Student1.Name;	
}
