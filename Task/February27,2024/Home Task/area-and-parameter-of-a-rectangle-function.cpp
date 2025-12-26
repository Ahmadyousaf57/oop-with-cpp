#include<iostream>
using namespace std;
int area(int l, int w){
	int area=l*w;
	return area;
}
int perimeter(int l, int w){
	int peri=(l+w)*2;
	return peri;
}
int main(){
	int l,w;
	cout<<"Enter the Length of the rectangle : ";
	cin>>l;
	cout<<"Enter the Width of the rectangle : ";
	cin>>w;
	int result=area(l,w);
	cout<<"Area of the rectangle is : "<<result<<endl;
	int result1=perimeter(l,w);
	cout<<"Perimeter of the rectangle is : "<<result1;
}
