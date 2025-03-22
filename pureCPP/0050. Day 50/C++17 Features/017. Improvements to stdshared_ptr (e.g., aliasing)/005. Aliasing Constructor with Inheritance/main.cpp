#include <iostream>
#include <memory>

struct Base {
    virtual ~Base() { std::cout << "Base destructor\n"; }
};

struct Derived : public Base {
    int data;
    Derived(int d) : data(d) {}
    ~Derived() { std::cout << "Derived destructor\n"; }
};

int main() {
    std::shared_ptr<Derived> derivedPtr = std::make_shared<Derived>(42);
    std::shared_ptr<int> aliasPtr(derivedPtr, &derivedPtr->data); // Alias to `data`

    std::cout << "Aliased value: " << *aliasPtr << "\n";
    std::cout << "Use count: " << aliasPtr.use_count() << "\n";
    
    return 0;
}
