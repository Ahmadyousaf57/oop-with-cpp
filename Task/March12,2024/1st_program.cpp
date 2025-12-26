#include<iostream>
using namespace std;
class laptop{
    public:
    int serial; 
    int price;
    int ram;
    int afterupgrade;
    string brand; 
    string model;
    string colour;
    string processor;
    string speed;
    string screensize;
    void enter(){
        cout<<"Enter the brand name of laptop : ";
        cin>>brand;
        cout<<"Enter the model name of laptop : ";
        cin>>model;
        cout<<"Enter the  serial number of laptop : ";
        cin>>serial;
        cout<<"Enter the laptop colour : ";
        cin>>colour;
        cout<<"Enter the laptop price : ";
        cin>>price;
        cout<<"Enter the processor name : ";
        cin>>processor;
        cout<<"Enter the speed of processor : ";
        cin>>speed;
        cout<<"Enter the RAM : ";
        cin>>ram;
        cout<<"Enter the screensize : ";
        cin>>screensize;
    }
    void display(){
    	cout<<"Laptop brand is : "<<brand<<endl;
    	cout<<"Laptop model is : "<<model<<endl;
    	cout<<"Laptop serial number is : "<<serial<<endl;
    	cout<<"Laptop colour is : "<<colour<<endl;
    	cout<<"Laptop price is : "<<price<<endl;
    	cout<<"Laptop processor name is : "<<processor<<endl;
    	cout<<"Laptop processor speed is : "<<speed<<endl;
    	cout<<"Laptop RAM is : "<<ram<<endl;
    	cout<<"Laptop screen size is : "<<screensize<<endl;
	}
    void upgrade(){
        

        int Upgraderam;
    
        cout<<"Enter Number of GB u want to increase for RAM : ";
        cin>>Upgraderam;
        afterupgrade=ram+Upgraderam;
        cout<<"RAM after upgrade is : "<<afterupgrade<<endl;
    }
    
};
int main(){
    laptop device;
    device.enter();
    device.display();
    device.upgrade();
}