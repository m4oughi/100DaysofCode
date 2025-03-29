#include <iostream>

struct Base {
    virtual void foo() {}
};

struct Derived {
    int id;
    [[no_unique_address]] Base base; // No extra space
};

int main() {
    std::cout << "Size of Derived struct: " << sizeof(Derived) << "\n";
}
