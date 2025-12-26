#include <iostream>
using namespace std;
int maximum_number(int size){
    int *array=new int[size];
    int *temp=array;
    int n=1;
    for (int i=0 ; i<size ; i++){
        cout<<"Enter the "<<n<<" element : ";
        cin>>*array;
        array++;
        n++;        
    }
    array=temp;
    int maximum_No=*array;
    for (int i=0 ; i<size ; i++){
        if (array[i] > maximum_No){
            maximum_No = array[i];
        }
    }
    delete[] temp;
    return maximum_No;
}
int odd_swap(int *a, int *b){
    if (*a%2!=0 && *b%2!=0){
        int temp = *a;
        *a = *b * 5;
        *b = temp * 5;
    }else{
        cout<<"Reminder: Only for Odd Swap"<<endl;
    }
}
int* array_expansion(int *a, int e){
    int n=e*2;
    int *array3 = new int[n];
    for(int i=0; i<n; i++){
         if (i < e) {
            array3[i] = a[i];      
        }else{
            array3[i] = -1; 
        }
    }
    return array3;
}
int* concatenate_function(int *x1, int y1, int *x2, int y2){
    int n=y1+y2;
     int *concatenated_array=new int[n];
     for(int i=0 ; i<n ; i++){
         if(i<y1){
             concatenated_array[i]=x1[i];
         }
         else{
             concatenated_array[i]=x2[i-y1];
         }
     }
     return concatenated_array;
}
int main(){
    cout<<"Maximum Number:"<<endl;
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int result=maximum_number(n);
    cout<<"The maximum number of array is: "<<result<<endl;
    cout<<"Odd Swap:"<<endl;
    int a1, a2;
    cout<<"Enter the first number:";
    cin>>a1;
    cout<<"Enter the second number:";
    cin>>a2;
    cout<<"First number before swapping: "<<a1<<endl;
    cout<<"Second number before swapping: "<<a2<<endl;
    odd_swap(&a1, &a2);
    cout<<"First number After swapping: "<<a1<<endl;
    cout<<"Second number After swapping: "<<a2<<endl;
    cout<<"Expansion of array: "<<endl;
    int c;
    cout<<"Enter size of array that is required to expand: ";
    cin>>c;
    int *array2=new int[c];
    for (int i=0 ; i<c ; i++){
        cout<<"Enter the element at index ("<<i<<"): ";
        cin>>array2[i];
    }
    int *afterexpansion=array_expansion(array2,c);
    cout<<"Expanded array: "<<endl;
    for (int i = 0 ; i < c*2 ; i++)
    {
        cout<<afterexpansion[i]<<endl;
    }
    cout<<"Contanetate :"<<endl;
    int q1,q2;
    cout<<"Enter size of first array: ";
    cin>>q1;
    int *array4= new int [q1];
    for (int i=0 ; i<q1 ; i++){
        cout<<"Enter the element at index ("<<i<<"): ";
        cin>>*(array4 + i);
    }
    cout<<"Enter size of second array: ";
    cin>>q2;
    int *array5= new int [q2];
    for (int i=0 ; i<q2 ; i++){
        cout<<"Enter the element at index ("<<i<<"): ";
        cin >> *(array5 + i);
    }
    int *finalarr=concatenate_function(array4,q1,array5,q2);
    cout<<"Final array: "<<endl;
    for (int i=0 ; i<q1+q2 ; i++)
    {
        cout<<"Element at the index ("<<i<<") is: "<<finalarr[i]<<endl;
    }
}
    
