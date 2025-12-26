#include<iostream>
using namespace std;
void swap(int a, int b){
	int temp=0;
	if(a>b){
		temp=a;
		a=b;
		b=temp;
	}
	cout<<"First number : "<<a<<endl;
	cout<<"Second number : "<<b<<endl;
}
int main(){
	int a,b;
	cout<<"Enter the first number : ";
	cin>>a;
	cout<<"Enter the second number : ";
	cin>>b;
	swap(a,b);
}
