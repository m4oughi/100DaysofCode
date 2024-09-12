#include <iostream>

struct Base {
protected:
    int length;
    
    friend int getLength(Base* b);
    
public:
    Base(int l) : length(l) {}
    virtual ~Base() = default;
};

struct Derived : public Base {
public:
    Derived(int l) : Base(l) {}
};

int getLength(Base* b) {
    return b->length;
}

int main() {
    Base* base = new Base(10);
    Derived* derived = new Derived(20);
    
    std::cout << "Base length: " << getLength(base) << std::endl;
    std::cout << "Derived length: " << getLength(derived) << std::endl;
    
    delete base;
    delete derived;
    
    return 0;
}
