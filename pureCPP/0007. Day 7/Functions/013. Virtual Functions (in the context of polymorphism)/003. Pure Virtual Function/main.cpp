#include <iostream>

class AbstractBase {
public:
    virtual void pureVirtualFunction() = 0;  // Pure virtual function
};

class ConcreteDerived : public AbstractBase {
public:
    void pureVirtualFunction() override {
        std::cout << "Implemented pure virtual function." << std::endl;
    }
};

int main() {
    ConcreteDerived obj;
    obj.pureVirtualFunction();  // Calls implemented function

    // AbstractBase absObj;  // Error: cannot instantiate abstract class
    return 0;
}
