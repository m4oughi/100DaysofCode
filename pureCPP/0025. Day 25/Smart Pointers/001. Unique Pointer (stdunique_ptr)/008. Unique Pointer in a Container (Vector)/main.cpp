#include <iostream>
#include <memory>
#include <vector>

class MyClass {
public:
    MyClass(int val) : value(val) {
        std::cout << "Constructing MyClass with value " << value << std::endl;
    }
    ~MyClass() {
        std::cout << "Destructing MyClass with value " << value << std::endl;
    }

private:
    int value;
};

int main() {
    std::vector<std::unique_ptr<MyClass>> vec;

    vec.push_back(std::make_unique<MyClass>(10));  // Adding unique_ptr to vector
    vec.push_back(std::make_unique<MyClass>(20));  // Another element

    std::cout << "Vector size: " << vec.size() << std::endl;
    return 0;
}
