#include <iostream>
using namespace std;
class Car;
void Cars_List(Car a);
class Car{
    public:
    string model;
    const string Get_Model(string m){
        model = m;
        return model;
    }
    friend void Cars_List(Car a);
};
void Cars_List(Car a){
    string Arr[]={"Toyota_Crush(MarkX)", "Honda_EX(EK)", "Toyota_Grande", "Honda_Shappar(Civic_Turbo)", "Suzuki_Daddo(Alto)"};
    for(int i=0 ; i<6 ; i++){
        if(Arr[i] == a.model ){
            cout << "The Car " << a.model << " is Available for sale :)" << endl;
            return;
        }
    }
    cout<<"Sorry This Car is not available for sale :( You can see other one " << endl;
}
int main(){
    Car obj;
    string Model;
    cout << "Enter the Model of the car You want to Retreive : ";
    cin >> Model;
    obj.Get_Model(Model);
    Cars_List(obj);
}