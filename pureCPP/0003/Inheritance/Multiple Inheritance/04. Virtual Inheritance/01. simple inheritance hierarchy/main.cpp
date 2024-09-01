#include <iostream>

// Virtual base class
class Base {
public:
    void show() const {
        std::cout << "Base class instance" << std::endl;
    }
};

// Derived class 1 using virtual inheritance
class Derived1 : virtual public Base {
public:
    void show() const {
        std::cout << "Derived1 class instance" << std::endl;
    }
};

// Derived class 2 using virtual inheritance
class Derived2 : virtual public Base {
public:
    void show() const {
        std::cout << "Derived2 class instance" << std::endl;
    }
};

// Final derived class
class Final : public Derived1, public Derived2 {
public:
    void show() const {
        std::cout << "Final class instance" << std::endl;
    }
};

int main() {
    Final f;
    f.show();  // Output: Final class instance
    return 0;
}
