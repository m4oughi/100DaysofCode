#include <iostream>

struct AccessControl {
private:
    unsigned int a : 4;

public:
    void setA(unsigned int val) {
        if (val < 16) a = val;
        else std::cerr << "Value out of range!" << std::endl;
    }
    
    unsigned int getA() const {
        return a;
    }
};

int main() {
    AccessControl ac;
    ac.setA(10);
    std::cout << "a: " << ac.getA() << std::endl;

    ac.setA(20); // Out of range
}
