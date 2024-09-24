#include <iostream>

struct Base {
    int id;
    Base(int id) : id(id) {}
};

struct Inner : Base {
    Inner(int id) : Base(id) {}
};

struct Outer {
    Inner inner;
    
    Outer(int id) : inner(id) {}
    
    void display() const {
        std::cout << "ID: " << inner.id << std::endl;
    }
};

int main() {
    Outer o(100);
    o.display();
}
