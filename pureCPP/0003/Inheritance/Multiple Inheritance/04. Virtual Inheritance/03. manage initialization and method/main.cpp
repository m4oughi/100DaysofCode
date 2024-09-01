#include <iostream>

// Virtual base class
class Base {
public:
    Base(int value) : value(value) {
        std::cout << "Base constructor with value " << value << std::endl;
    }
    
    void show() const {
        std::cout << "Base value: " << value << std::endl;
    }

private:
    int value;
};

// Derived class 1 using virtual inheritance
class Derived1 : virtual public Base {
public:
    Derived1(int value) : Base(value), derived1Value(value + 1) {
        std::cout << "Derived1 constructor with derived1Value " << derived1Value << std::endl;
    }

private:
    int derived1Value;
};

// Derived class 2 using virtual inheritance
class Derived2 : virtual public Base {
public:
    Derived2(int value) : Base(value), derived2Value(value + 2) {
        std::cout << "Derived2 constructor with derived2Value " << derived2Value << std::endl;
    }

private:
    int derived2Value;
};

// Final derived class
class Final : public Derived1, public Derived2 {
public:
    Final(int value) : Base(value), Derived1(value), Derived2(value), finalValue(value + 3) {
        std::cout << "Final constructor with finalValue " << finalValue << std::endl;
    }

    void showAll() const {
        show();          // Call Base::show
        Derived1::show(); // Derived1::show (Base::show)
        Derived2::show(); // Derived2::show (Base::show)
    }

private:
    int finalValue;
};

int main() {
    Final f(10);
    f.showAll();  // Output: Base constructor with value 10 Derived1 constructor with derived1Value 11 Derived2 constructor with derived2Value 12 Final constructor with finalValue 13 Base value: 10 Base value: 10 Base value: 10
    return 0;
}
