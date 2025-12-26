#include <iostream>
#include <string>

using namespace std;

class Person {
private:
    string name;
    int age;

public:
    // Parameterized constructor
    Person(string n, int a) : name(n), age(a) {}

    // Member function to compare ages
    void compareAge(Person other) {
        if (this->age > other.age) {
            cout << name << " is older than " << other.name << endl;
        } else if (this->age < other.age) {
            cout << name << " is younger than " << other.name << endl;
        } else {
            cout << name << " is the same age as " << other.name << endl;
        }
    }
};

int main() {
    // Create Person objects
    Person person1("Alice", 25);
    Person person2("Bob", 30);
    Person person3("Charlie", 25);

    // Compare ages
    person1.compareAge(person2);
    person2.compareAge(person1);
    person1.compareAge(person3);
    person3.compareAge(person2);

    return 0;
}