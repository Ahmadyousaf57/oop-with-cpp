#include <iostream>
#include <string>

using namespace std;

class Vehicle {
protected:
    string manufacturer;
    int year;

public:
    Vehicle(string m, int y) : manufacturer(m), year(y) {}

    virtual void displayInfo() = 0; // Pure virtual function
    virtual ~Vehicle() {} // Virtual destructor for proper cleanup
};

class Car : public Vehicle {
private:
    string model;
    double price;

public:
    Car(string m, int y, string mod, double pr) : Vehicle(m, y), model(mod), price(pr) {}

    void displayInfo() override {
        cout << "Car Information:" << endl;
        cout << "Manufacturer: " << manufacturer << endl;
        cout << "Year: " << year << endl;
        cout << "Model: " << model << endl;
        cout << "Price: $" << price << endl;
    }
};

class Bicycle : public Vehicle {
private:
    string type;
    int gear;

public:
    Bicycle(string m, int y, string t, int g) : Vehicle(m, y), type(t), gear(g) {}

    void displayInfo() override {
        cout << "Bicycle Information:" << endl;
        cout << "Manufacturer: " << manufacturer << endl;
        cout << "Year: " << year << endl;
        cout << "Type: " << type << endl;
        cout << "Gear: " << gear << endl;
    }
};

int main() {
    int choice, numVehicles;
    cout << "Enter the number of vehicles: ";
    cin >> numVehicles;

    // Array of pointers to Vehicle objects
    Vehicle** vehicles = new Vehicle*[numVehicles];

    for (int i = 0; i < numVehicles; i++) {
        cout << "Enter 1 for Car or 2 for Bicycle: ";
        cin >> choice;

        if (choice == 1) {
            string manufacturer, model;
            int year;
            double price;

            cout << "Enter car manufacturer: ";
            cin>>manufacturer;
            cout << "Enter car year: ";
            cin >> year;
            cout << "Enter car model: ";
            cin>>model;
            cout << "Enter car price: ";
            cin >> price;

            vehicles[i] = new Car(manufacturer, year, model, price);
        } else if (choice == 2) {
            string manufacturer, type;
            int year, gear;

            cout << "Enter bicycle manufacturer: ";
            cin>>manufacturer;
            cout << "Enter bicycle year: ";
            cin >> year;
            cout << "Enter bicycle type: ";
            cin>>type;
            cout << "Enter bicycle gear: ";
            cin >> gear;

            vehicles[i] = new Bicycle(manufacturer, year, type, gear);
        }
    }

    for (int i = 0; i < numVehicles; i++) {
        vehicles[i]->displayInfo();
        cout << endl;
    }

    // Don't forget to delete dynamically allocated memory
    for (int i = 0; i < numVehicles; i++) {
        delete vehicles[i];
    }
    delete[] vehicles;

    return 0;
}
