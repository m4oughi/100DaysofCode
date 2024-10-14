#include <iostream>
#include <memory>

class B;  // Forward declaration

class A {
public:
    std::shared_ptr<B> bPtr;  // A owns B
    ~A() { std::cout << "A destroyed" << std::endl; }
};

class B {
public:
    std::weak_ptr<A> aPtr;  // B has weak reference to A
    std::weak_ptr<B> selfPtr;  // Weak reference to itself (rare use case)
    
    void accessA() {
        if (auto aShared = aPtr.lock()) {
            std::cout << "B can access A" << std::endl;
        } else {
            std::cout << "A is destroyed" << std::endl;
        }
    }

    ~B() { std::cout << "B destroyed" << std::endl; }
};

int main() {
    std::shared_ptr<A> a = std::make_shared<A>();
    std::shared_ptr<B> b = std::make_shared<B>();

    a->bPtr = b;  // A owns B
    b->aPtr = a;  // B points weakly to A
    b->selfPtr = b;  // Self-reference using weak_ptr

    b->accessA();  // Access A through weak_ptr

    return 0;
}
