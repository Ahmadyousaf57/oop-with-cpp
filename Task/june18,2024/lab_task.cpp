#include <iostream>
using namespace std;

int* createDoubledArray(const int arr[], int size) {
    int* newArray = new int[size * 2];

    for (int i = 0; i < size; i++) {
        newArray[i] = arr[i];
    }

    for (int i = size; i < size * 2; i++) {
        newArray[i] = -1;
    }

    return newArray;
}

int main() {
    int originalArray[] = {1, 3, 4};
    int originalSize = sizeof(originalArray) / sizeof(originalArray[0]);

    int* doubledArray = createDoubledArray(originalArray, originalSize);

    // Print the doubled array
    for (int i = 0; i < originalSize * 2; i++) {
        cout << doubledArray[i] << " ";
    }
    cout << endl;

    // Deallocate memory for the dynamically allocated array
    delete[] doubledArray;

    return 0;
}
