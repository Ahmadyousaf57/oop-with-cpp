#include <iostream>
using namespace std;
class Triangle {
public:
    static bool Triangle_Test(double a, double b, double c) {
        if (a >= b + c || b >= a + c || c >= a + b) {
            return false;
        }
        return true;
    }
};

int main() {
    double a, b, c;
    cout << "Enter three sides of a triangle: ";
    cin >> a >> b >> c;

    if (Triangle::Triangle_Test(a, b, c)) {
        cout << "The sides can form a triangle." << std::endl;
    } else {
        cout << "The sides cannot form a triangle." << std::endl;
    }

    return 0;
}