#include <iostream>

// Base class
class Base {
public:
    void show() const {
        std::cout << "Base class" << std::endl;
    }
};

// Derived class 1 using virtual inheritance
class Derived1 : virtual public Base {
public:
    void show() const {
        std::cout << "Derived1 class" << std::endl;
    }
};

// Derived class 2 using virtual inheritance
class Derived2 : virtual public Base {
public:
    void show() const {
        std::cout << "Derived2 class" << std::endl;
    }
};

// Final derived class
class Final : public Derived1, public Derived2 {
public:
    void show() const {
        std::cout << "Final class" << std::endl;
    }
};

int main() {
    Final f;
    f.show();  // Output: Final class
    return 0;
}
