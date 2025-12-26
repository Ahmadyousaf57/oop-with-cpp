#include <iostream>
#include <cmath>

using namespace std;

// Base class: Number
class Number {
public:
    virtual bool isWholeNumber() const = 0;
    virtual bool isPositive() const = 0;
    virtual long long factorial() const = 0;
};

// Derived class: IntegerNumber
class IntegerNumber : public Number {
private:
    int number;

public:
    IntegerNumber(int num) : number(num) {}

    bool isWholeNumber() const override {
        return true; // All integers are whole numbers
    }

    bool isPositive() const override {
        return number > 0;
    }

    long long factorial() const override {
        if (number < 0) {
            return -1; // Factorial is not defined for negative numbers
        }
        long long fact = 1;
        for (int i = 1; i <= number; ++i) {
            fact *= i;
        }
        return fact;
    }

    int getNumber() const {
        return number;
    }
};

// Derived class: FloatNumber
class FloatNumber : public Number {
private:
    float number;

public:
    FloatNumber(float num) : number(num) {}

    bool isWholeNumber() const override {
        return floor(number) == number;
    }

    bool isPositive() const override {
        return number > 0.0;
    }

    long long factorial() const override {
        if (number < 0 || !isWholeNumber()) {
            return -1; // Factorial is not defined for negative or non-integer numbers
        }
        int intNumber = static_cast<int>(number);
        long long fact = 1;
        for (int i = 1; i <= intNumber; ++i) {
            fact *= i;
        }
        return fact;
    }

    float getNumber() const {
        return number;
    }
};

int main() {
    IntegerNumber intNum(5);
    FloatNumber floatNum(5.5);

    cout << "Integer Number: " << intNum.getNumber() << endl;
    cout << "Is whole number: " << (intNum.isWholeNumber() ? "Yes" : "No") << endl;
    cout << "Is positive: " << (intNum.isPositive() ? "Yes" : "No") << endl;
    cout << "Factorial: " << intNum.factorial() << endl;

    cout << "\nFloat Number: " << floatNum.getNumber() << endl;
    cout << "Is whole number: " << (floatNum.isWholeNumber() ? "Yes" : "No") << endl;
    cout << "Is positive: " << (floatNum.isPositive() ? "Yes" : "No") << endl;
    cout << "Factorial: " << floatNum.factorial() << endl;

    return 0;
}
