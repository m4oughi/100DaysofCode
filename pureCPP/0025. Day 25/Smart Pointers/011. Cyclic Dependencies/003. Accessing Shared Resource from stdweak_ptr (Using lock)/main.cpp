#include <iostream>
#include <memory>

class A;  // Forward declaration

class B {
public:
    std::weak_ptr<A> aPtr;  // Weak pointer to A
    void accessA() {
        if (auto aShared = aPtr.lock()) {  // Check if A still exists
            std::cout << "Accessing A from B" << std::endl;
        } else {
            std::cout << "A has been destroyed" << std::endl;
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
    std::shared_ptr<A> a = std::make_shared<A>();
    std::shared_ptr<B> b = std::make_shared<B>();

    a->bPtr = b;  // A points to B
    b->aPtr = a;  // B holds a weak reference to A

    b->accessA();  // Access A safely through weak_ptr

    return 0;
}
