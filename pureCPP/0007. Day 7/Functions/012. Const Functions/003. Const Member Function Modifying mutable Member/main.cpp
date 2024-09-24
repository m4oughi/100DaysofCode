#include <iostream>

class MyClass {
private:
    mutable int counter;  // Mutable member variable

public:
    MyClass() : counter(0) {}

    void incrementCounter() const {
        ++counter;  // Modifying mutable member in const function
    }

    int getCounter() const {
        return counter;
    }
};

int main() {
    MyClass obj;
    obj.incrementCounter();  // Modify mutable member
    std::cout << "Counter: " << obj.getCounter() << std::endl;
    return 0;
}
