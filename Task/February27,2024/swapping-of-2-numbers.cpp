#include<iostream>
using namespace std;
int main(){
	int n,n1,temp=0;
	cout<<"Enter the number 1 : ";
	cin>>n;
	cout<<"Enter the number 2 : ";
	cin>>n1;
	if(n>n1){
		temp=n;
		n=n1;
		n1=temp;
		}
	cout<<"Small number is : "<<n<<endl;
	cout<<"Larger number is : "<<n1;
}
