#include <iostream>

// Base class
class Base {
public:
    virtual void display() {
        std::cout << "Base class display function." << std::endl;
    };
};

// Intermediate derived class
class IntermediateDerived : public Base {
public:
    void display() override {
        std::cout << "IntermediateDerived class display function." << std::endl;
    }
};

// Final derived class
class FinalDerived : public IntermediateDerived {
public:
    void display() override {
        std::cout << "FinalDerived class display function." << std::endl;
    }
};

int main() {
    Base* basePtr = new Base(); // Base class pointer
    basePtr->display();

    Base* intermediateDerivedPtr = new IntermediateDerived(); // Base class pointer to IntermediateDerived object
    intermediateDerivedPtr->display(); // Calls IntermediateDerived's display()

    Base* finalDerivedPtr = new FinalDerived();  // Base class pointer to FinalDerived object
    finalDerivedPtr->display(); // Calls FinalDerived's display()

    delete basePtr; // Clean up
    delete intermediateDerivedPtr; // Clean up
    delete finalDerivedPtr;  // Clean up

    return 0;
};