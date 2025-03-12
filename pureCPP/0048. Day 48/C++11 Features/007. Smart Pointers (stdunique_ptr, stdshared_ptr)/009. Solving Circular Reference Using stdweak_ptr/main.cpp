#include <iostream>
#include <memory>

class B; // Forward declaration

class A {
public:
    std::weak_ptr<B> b_ptr; // Weak reference
    ~A() { std::cout << "A Destroyed\n"; }
};

class B {
public:
    std::weak_ptr<A> a_ptr; // Weak reference
    ~B() { std::cout << "B Destroyed\n"; }
};

int main() {
    std::shared_ptr<A> a = std::make_shared<A>();
    std::shared_ptr<B> b = std::make_shared<B>();

    a->b_ptr = b;
    b->a_ptr = a;

    return 0; // Proper destruction
}
