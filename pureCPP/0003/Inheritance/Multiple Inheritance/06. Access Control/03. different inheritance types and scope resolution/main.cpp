#include <iostream>

class Base {
public:
    void showBase() const {
        std::cout << "Base public method" << std::endl;
    }
protected:
    int protectedData = 100;
private:
    int privateData = 200;
};

class Derived1 : public Base {
public:
    void showDerived1() const {
        std::cout << "Derived1 public method" << std::endl;
        std::cout << "Protected data from Base: " << protectedData << std::endl;
        // std::cout << "Private data from Base: " << privateData << std::endl; // Error
    }
};

class Derived2 : public Base {
public:
    void showDerived2() const {
        std::cout << "Derived2 public method" << std::endl;
        std::cout << "Protected data from Base: " << protectedData << std::endl;
        // std::cout << "Private data from Base: " << privateData << std::endl; // Error
    }
};

class Final : public Derived1, public Derived2 {
public:
    void show() const {
        // Accessing Base's protected data via Derived1 and Derived2
        std::cout << "Final class method" << std::endl;
        Derived1::showDerived1();
        Derived2::showDerived2();
        std::cout << "Protected data from Base through Derived1: " << Derived1::protectedData << std::endl;
        std::cout << "Protected data from Base through Derived2: " << Derived2::protectedData << std::endl;
        // std::cout << "Private data from Base: " << privateData << std::endl; // Error
    }
};

int main() {
    Final f;
    f.show();
    return 0;
}
