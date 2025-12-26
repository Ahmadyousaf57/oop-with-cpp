#include <iostream>
using namespace std;
class Circle {
public:
    double radius;
    static const double pi; // Static constant member

public:
    // Parameterized constructor
    Circle(double r) : radius(r) {}

    // Static member function to get the value of pi
    static double getPi() {
        return pi;
    }

    // Member function to calculate the area of the circle
    double calculateArea() {
        return pi * radius * radius;
    }
};

// Initialize static constant member
const double Circle::pi = 3.14;

int main() {
    Circle circle(5.0);

    cout << "Pi: " << Circle::getPi() << endl;
       cout << "Radius: " << circle.radius << endl;
    cout << "Area: " << circle.calculateArea() << endl;

    return 0;
}