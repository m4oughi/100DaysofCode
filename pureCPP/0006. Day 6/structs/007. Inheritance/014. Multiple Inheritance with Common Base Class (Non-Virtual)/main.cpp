#include <iostream>

struct Common {
    int commonValue;
};

struct Base1 : public Common {
    int base1Value;
};

struct Base2 : public Common {
    int base2Value;
};

struct Derived : public Base1, public Base2 {
    void print() {
        // Resolving ambiguity by specifying the path
        std::cout << "Common from Base1: " << Base1::commonValue << std::endl;
        std::cout << "Common from Base2: " << Base2::commonValue << std::endl;
    }
};

int main() {


    return 0;
}