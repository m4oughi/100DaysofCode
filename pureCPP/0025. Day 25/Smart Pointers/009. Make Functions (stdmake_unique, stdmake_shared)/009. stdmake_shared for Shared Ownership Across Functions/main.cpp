#include <iostream>
#include <memory>

class Data {
public:
    Data(int v) : value(v) {}
    int getValue() const { return value; }
private:
    int value;
};

void display(std::shared_ptr<Data> ptr) {
    std::cout << "Data value: " << ptr->getValue() << std::endl;
}

int main() {
    auto sharedPtr = std::make_shared<Data>(500);  // Create shared_ptr

    display(sharedPtr);  // Pass shared ownership to a function

    std::cout << "Data still accessible in main: " << sharedPtr->getValue() << std::endl;

    return 0;
}
