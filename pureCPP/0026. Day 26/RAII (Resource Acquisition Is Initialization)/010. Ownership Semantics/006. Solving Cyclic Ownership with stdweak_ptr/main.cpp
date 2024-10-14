#include <iostream>
#include <memory>

class A;
class B;

class A {
public:
    std::shared_ptr<B> bPtr;
    ~A() { std::cout << "A destroyed." << std::endl; }
};

class B {
public:
    std::weak_ptr<A> aPtr;  // Weak pointer to prevent cyclic reference.
    ~B() { std::cout << "B destroyed." << std::endl; }
};

int main() {
    {
        std::shared_ptr<A> a = std::make_shared<A>();
        std::shared_ptr<B> b = std::make_shared<B>();
        a->bPtr = b;  // A owns B.
        b->aPtr = a;  // B weakly references A, breaking the cycle.
    }  // Both A and B are properly destroyed.
    std::cout << "Cyclic ownership resolved using weak_ptr." << std::endl;
}
