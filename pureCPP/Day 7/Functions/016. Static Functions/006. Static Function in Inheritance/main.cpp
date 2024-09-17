#include <iostream>

class Base {
public:
    static void display() {
        std::cout << "Base class static function" << std::endl;
    }
};

class Derived : public Base {
public:
    // Hide base class static function
    static void display() {
        std::cout << "Derived class static function" << std::endl;
    }
};

int main() {
    Base::display();    // Calls Base class static function
    Derived::display(); // Calls Derived class static function

    Base base;
    Derived derived;

    base.display();     // Calls Base class static function
    derived.display();  // Calls Derived class static function

    return 0;
}
