#include <iostream>

// Base class 1
class Base1 {
public:
    Base1(int value) : value(value) {
        std::cout << "Base1 constructor with value " << value << std::endl;
    }
    
    void show() const {
        std::cout << "Base1 value: " << value << std::endl;
    }

private:
    int value;
};

// Base class 2
class Base2 {
public:
    Base2(int value) : value(value) {
        std::cout << "Base2 constructor with value " << value << std::endl;
    }
    
    void show() const {
        std::cout << "Base2 value: " << value << std::endl;
    }

private:
    int value;
};

// Derived class
class Derived : public Base1, public Base2 {
public:
    // Initialize base classes via initializer list
    Derived(int value1, int value2) : Base1(value1), Base2(value2), derivedValue(value1 + value2) {
        std::cout << "Derived constructor with derivedValue " << derivedValue << std::endl;
    }
    
    void showAll() const {
        Base1::show();
        Base2::show();
        std::cout << "Derived value: " << derivedValue << std::endl;
    }

private:
    int derivedValue;
};

int main() {
    Derived d(10, 20);
    d.showAll();  // Output: Base1 constructor with value 10 Base2 constructor with value 20 Derived constructor with derivedValue 30 Base1 value: 10 Base2 value: 20 Derived value: 30
    return 0;
}
