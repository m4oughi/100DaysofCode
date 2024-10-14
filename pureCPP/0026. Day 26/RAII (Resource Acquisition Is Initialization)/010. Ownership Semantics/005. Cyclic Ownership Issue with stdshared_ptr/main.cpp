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
    std::shared_ptr<A> aPtr;
    ~B() { std::cout << "B destroyed." << std::endl; }
};

int main() {
    {
        std::shared_ptr<A> a = std::make_shared<A>();
        std::shared_ptr<B> b = std::make_shared<B>();
        a->bPtr = b;  // A owns B.
        b->aPtr = a;  // B owns A. Cyclic reference.
    }  // Neither A nor B is destroyed due to cyclic ownership.
    std::cout << "Cyclic ownership prevents automatic destruction." << std::endl;
}
