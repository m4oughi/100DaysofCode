#include <iostream>

class Base1 {
public:
    void showBase1() const {
        std::cout << "Base1 public method" << std::endl;
    }
protected:
    int protectedData1 = 10;
};

class Base2 {
public:
    void showBase2() const {
        std::cout << "Base2 public method" << std::endl;
    }
protected:
    int protectedData2 = 20;
};

class Derived : public Base1, public Base2 {
public:
    void show() const {
        showBase1();  // Access Base1's public method
        showBase2();  // Access Base2's public method
        std::cout << "Protected data from Base1: " << protectedData1 << std::endl;
        std::cout << "Protected data from Base2: " << protectedData2 << std::endl;
    }
};

int main() {
    Derived d;
    d.show();
    return 0;
}
