#include <iostream>
using namespace std;

class MaxValueFinder {
public:
    int size = 5;
    int *array = new int[size];
    int *temp = array;

    void Enter_Data() {
        for(int i = 0; i < size; i++) {
            cout << "Enter the element at index (" << i << ") :";
            cin >> array[i];
        }
    }

    int* Max_Value() {
        int *max = array;
        for(int i = 1; i < size; i++) {
            if(array[i] > *max) {
                max = &array[i];
            }
        }
        return max;
    }
};

int main() {
    MaxValueFinder value;
    value.Enter_Data();
    int *MaxPtr = value.Max_Value();
    cout << "The maximum value is: " << *MaxPtr;
    delete[] value.array; // Don't forget to free the dynamically allocated memory
    return 0;
}