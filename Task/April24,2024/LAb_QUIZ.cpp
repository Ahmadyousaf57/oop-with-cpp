#include <iostream>
using namespace std;
class MaxValueFinder{
    public:
    int size=5;
    int *array=new int[size];
    int *temp=array;
    void Enter_Data(){
        for(int i=0 ; i<5 ; i++){
        cout<<"Enter the element at index ("<<i<<") :";
        cin>>*array;
        array++;
    }
}
    int Max_Value(){
        int *max=array;
        for(int i=0 ; i<5 ; i++){
            if(*array>*max){
                max=&array;
            }
            return max;
        }
    }
};
int main(){
  MaxValueFinder value;
  value.Enter_Data();
  int *maxptr = value.Max_Value();
  cout<<"The maximum value is :"<<*maxptr;
return 0;
}