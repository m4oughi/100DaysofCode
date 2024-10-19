#include <iostream>
#include <memory>

class B;  // Forward declaration

class A {
public:
    std::shared_ptr<B> ptrToB;
    ~A() { std::cout << "A destroyed!" << std::endl; }
};

class B {
public:
    std::shared_ptr<A> ptrToA;
    ~B() { std::cout << "B destroyed!" << std::endl; }
};

int main() {
    std::shared_ptr<A> aPtr = std::make_shared<A>();
    std::shared_ptr<B> bPtr = std::make_shared<B>();

    aPtr->ptrToB = bPtr;
    bPtr->ptrToA = aPtr;

    // Both objects will never be destroyed, causing a memory leak
    return 0;
}
