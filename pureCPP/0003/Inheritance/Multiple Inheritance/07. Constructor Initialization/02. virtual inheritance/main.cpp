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

protected:
    int value;
};

// Derived class 1 using virtual inheritance
class Derived1 : virtual public Base {
public:
    Derived1(int value) : Base(value), derived1Value(value + 10) {
        std::cout << "Derived1 constructor with derived1Value " << derived1Value << std::endl;
    }

protected:
    int derived1Value;
};

// Derived class 2 using virtual inheritance
class Derived2 : virtual public Base {
public:
    Derived2(int value) : Base(value), derived2Value(value + 20) {
        std::cout << "Derived2 constructor with derived2Value " << derived2Value << std::endl;
    }

protected:
    int derived2Value;
};

// Final derived class
class Final : public Derived1, public Derived2 {
public:
    Final(int value) : Base(value), Derived1(value), Derived2(value), finalValue(value + 30) {
        std::cout << "Final constructor with finalValue " << finalValue << std::endl;
    }

    void showAll() const {
        Base::show();
        Derived1::show();  // Will call Base::show due to virtual inheritance
        Derived2::show();  // Will call Base::show due to virtual inheritance
        std::cout << "Final value: " << finalValue << std::endl;
    }

private:
    int finalValue;
};

int main() {
    Final f(10);
    f.showAll();  // Output: Base constructor with value 10 Derived1 constructor with derived1Value 20 Derived2 constructor with derived2Value 30 Final constructor with finalValue 40 Base value: 10 Base value: 10 Base value: 10 Final value: 40
    return 0;
}
