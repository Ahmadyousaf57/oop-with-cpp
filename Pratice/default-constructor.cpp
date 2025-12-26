#include<iostream>
using namespace std;

class Car {
private:
    string brand;
    string model;
    int year;

public:
    // Default constructor
    Car() : brand("Unknown"), model("Unknown"), year(0) {}

    // Parameterized constructor
    Car(string b, string m, int y) : brand(b), model(m), year(y) {}

    // Member function to display car information
    void displayInfo() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};

int main() {
    // Create a Car object using the default constructor
    Car car1;
    cout << "Car 1 Information:" << endl;
    car1.displayInfo();

    // Create a Car object using the parameterized constructor
    Car car2("Toyota", "Corolla", 2015);
    cout << "\nCar 2 Information:" << endl;
    car2.displayInfo();

    return 0;
}