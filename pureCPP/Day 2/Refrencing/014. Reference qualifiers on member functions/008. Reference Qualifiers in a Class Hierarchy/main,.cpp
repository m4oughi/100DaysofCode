#include <iostream>

class Base {
public:
    void baseMethod() & {
        std::cout << "Base l-value method" << std::endl;
    }

    void baseMethod() && {
        std::cout << "Base r-value method" << std::endl;
    }
};

class Derived : public Base {
public:
    void derivedMethod() & {
        std::cout << "Derived l-value method" << std::endl;
    }

    void derivedMethod() && {
        std::cout << "Derived r-value method" << std::endl;
    }
};

int main() {
    Derived obj;
    obj.derivedMethod();  // Calls l-value version

    Derived().derivedMethod();  // Calls r-value version

    Base baseObj;
    baseObj.baseMethod();  // Calls l-value version

    Base().baseMethod();  // Calls r-value version
}
