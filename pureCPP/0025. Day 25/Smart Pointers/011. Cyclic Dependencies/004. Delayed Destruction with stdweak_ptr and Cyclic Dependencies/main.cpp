#include <iostream>
#include <memory>

class A;

class B {
public:
    std::weak_ptr<A> aPtr;  // Weak pointer to A to prevent cyclic dependency
    void checkA() {
        if (auto aShared = aPtr.lock()) {
            std::cout << "B can access A" << std::endl;
        } else {
            std::cout << "A is destroyed" << std::endl;
        }
    }
    ~B() { std::cout << "B destroyed" << std::endl; }
};

class A {
public:
    std::shared_ptr<B> bPtr;  // Shared pointer to B
    ~A() { std::cout << "A destroyed" << std::endl; }
};

int main() {
    std::shared_ptr<A> a;
    std::shared_ptr<B> b;

    {  // Block scope to demonstrate delayed destruction
        a = std::make_shared<A>();
        b = std::make_shared<B>();
        
        a->bPtr = b;  // A points to B
        b->aPtr = a;  // B points weakly to A

        b->checkA();  // B can access A
    }

    std::cout << "End of scope, destructors called" << std::endl;
    b->checkA();  // A is destroyed; B can no longer access A

    return 0;
}
