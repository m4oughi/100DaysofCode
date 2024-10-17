#include <iostream>

class Base {
protected:
    int* baseData;
public:
    Base() : baseData(new int(100)) {
        std::cout << "Base constructor: Allocating base resource.\n";
    }

    Base(Base&& other) noexcept : baseData(other.baseData) {
        other.baseData = nullptr;
        std::cout << "Base move constructor: Moving base resource.\n";
    }

    virtual ~Base() {
        delete baseData;
        std::cout << "Base destructor: Releasing base resource.\n";
    }
};

class Derived : public Base {
    int* derivedData;
public:
    Derived() : derivedData(new int(200)) {
        std::cout << "Derived constructor: Allocating derived resource.\n";
    }

    Derived(Derived&& other) noexcept : Base(std::move(other)), derivedData(other.derivedData) {
        other.derivedData = nullptr;
        std::cout << "Derived move constructor: Moving derived resource.\n";
    }

    ~Derived() {
        delete derivedData;
        std::cout << "Derived destructor: Releasing derived resource.\n";
    }
};

int main() {
    Derived d1;
    Derived d2 = std::move(d1);  // Calls derived move constructor and base move constructor
}
