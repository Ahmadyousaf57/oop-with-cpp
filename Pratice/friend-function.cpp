#include <iostream>
using namespace std;

class OtherClass; // Forward declaration

class Maximum {
private:
    int num1;

public:
    void setNum1(int n) {
        num1 = n;
    }

    friend int findMax(Maximum, OtherClass); // Friend function declaration
};

class OtherClass {
private:
    int num2;

public:
    void setNum2(int n) {
        num2 = n;
    }

    friend int findMax(Maximum, OtherClass); // Friend function declaration
};

// Friend function definition
int findMax(Maximum obj1, OtherClass obj2) {
    if (obj1.num1 > obj2.num2)
        return obj1.num1;
    else
        return obj2.num2;
}

int main() {
    Maximum obj1;
    OtherClass obj2;

    int value1, value2;

    cout << "Enter first number: ";
    cin >> value1;
    cout << "Enter second number: ";
    cin >> value2;

    obj1.setNum1(value1);
    obj2.setNum2(value2);

    cout << "The maximum number is: " << findMax(obj1, obj2) << endl;

    return 0;
}
