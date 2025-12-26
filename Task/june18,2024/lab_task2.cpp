
#include <iostream>
using namespace std;
int maximum(int size){
    int *arr = new int[size];
    for(int i = 0; i<size; i++){
        cin >> *(arr + i);
    }
    int maxEl = arr[0];
    for(int i =0; i<size; i++){
        if(*(arr + i) > maxEl){
            maxEl = *(arr + i);
        }
    
}
}
int main()
{
    int n;
    cin >> n;
    int m = maximum(n);
    cout << "Max Element is " << m << endl;
    
    return 0;
}
