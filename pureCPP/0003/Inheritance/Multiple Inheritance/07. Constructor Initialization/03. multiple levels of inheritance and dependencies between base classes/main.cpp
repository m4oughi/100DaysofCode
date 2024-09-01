#include <iostream>

// Base class 1
class Base1 {
public:
    Base1(int value1) : value1(value1) {
        std::cout << "Base1 constructor with value1 " << value1 << std::endl;
    }
    
    void showBase1() const {
        std::cout << "Base1 value1: " << value1 << std::endl;
    }

protected:
    int value1;
};

// Base class 2
class Base2 {
public:
    Base2(int value2) : value2(value2) {
        std::cout << "Base2 constructor with value2 " << value2 << std::endl;
    }
    
    void showBase2() const {
        std::cout << "Base2 value2: " << value2 << std::endl;
    }

protected:
    int value2;
};

// Derived class using virtual inheritance
class Derived1 : virtual public Base1 {
public:
    Derived1(int value1, int value3) : Base1(value1), value3(value3) {
        std::cout << "Derived1 constructor with value3 " << value3 << std::endl;
    }

    void showDerived1() const {
        showBase1();
        std::cout << "Derived1 value3: " << value3 << std::endl;
    }

protected:
    int value3;
};

// Another derived class using virtual inheritance
class Derived2 : virtual public Base2 {
public:
    Derived2(int value2, int value4) : Base2(value2), value4(value4) {
        std::cout << "Derived2 constructor with value4 " << value4 << std::endl;
    }

    void showDerived2() const {
        showBase2();
        std::cout << "Derived2 value4: " << value4 << std::endl;
    }

protected:
    int value4;
};

// Final derived class combining both Derived1 and Derived2
class Final : public Derived1, public Derived2 {
public:
    Final(int value1, int value2, int value3, int value4)
        : Base1(value1), Base2(value2), Derived1(value1, value3), Derived2(value2, value4), finalValue(value3 + value4) {
        std::cout << "Final constructor with finalValue " << finalValue << std::endl;
    }

    void showAll() const {
        showDerived1();
        showDerived2();
        std::cout << "Final value: " << finalValue << std::endl;
    }

private:
    int finalValue;
};

int main() {
    Final f(1, 2, 3, 4);
    f.showAll();  // Output: Base1 constructor with value1 1 Base2 constructor with value2 2 Derived1 constructor with value3 3 Derived2 constructor with value4 4 Final constructor with finalValue 7 Base1 value1: 1 Derived1 value3: 3 Base2 value2: 2 Derived2 value4: 4 Final value: 7
    return 0;
}
