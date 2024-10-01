#include <iostream>

class Base {
public:
    Base() = default;  // Default constructor
    Base(const Base&) = delete;  // Delete copy constructor
    Base(Base&&) = default;  // Default move constructor
    ~Base() = default;  // Default destructor
};

class Derived : public Base {
public:
    Derived() = default;  // Default constructor
    Derived(const Derived&) = delete;  // Delete copy constructor
    Derived(Derived&&) = default;  // Default move constructor
    ~Derived() = default;  // Default destructor
};

int main() {
    Derived obj1;
    // Derived obj2 = obj1;  // Error: copy constructor is deleted
    Derived obj3 = std::move(obj1);  // Move constructor works
    return 0;
}
