#include <iostream>
#include <stdexcept>

class base {
public:
    virtual ~base() {} // Virtual destructor
    virtual void show() const { // Declare show as const
        std::cout << "base\n";
    }
};

class d1 : public base {
public:
    void show() const override { // Declare show as const
        std::cout << "derived-1\n";
    }
};

class d2 : public base {
public:
    void show() const override { // Declare show as const
        std::cout << "derived-2\n";
    }
};

int main() {
    base* pb = nullptr;
    d1 od1;
    d2 od2;
    int n;

    try {
        std::cin >> n;
        if (std::cin.fail()) {
            throw std::invalid_argument("Invalid input");
        }

        if (n % 2) {
            pb = &od1;
        } else {
            pb = &od2;
        }

        if (pb != nullptr) {
            pb->show();
        } else {
            std::cout << "Invalid input\n";
        }
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << '\n';
        return 1;
    }

    return 0;
}