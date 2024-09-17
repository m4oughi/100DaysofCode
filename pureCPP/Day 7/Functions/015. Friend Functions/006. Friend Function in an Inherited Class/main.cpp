#include <iostream>

class Base {
private:
    int data;

public:
    Base(int d) : data(d) {}

    // Friend function declaration
    friend void showData(const Base& b);
};

class Derived : public Base {
public:
    Derived(int d) : Base(d) {}
};

// Friend function definition
void showData(const Base& b) {
    std::cout << "Base data: " << b.data << std::endl;
}

int main() {
    Derived d(42);
    showData(d);  // Calls friend function for base class

    return 0;
}
