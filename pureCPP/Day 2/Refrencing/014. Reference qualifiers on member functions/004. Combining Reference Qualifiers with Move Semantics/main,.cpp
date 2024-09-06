#include <iostream>
#include <utility>

class MyClass {
public:
    MyClass() = default;
    MyClass(MyClass&&) noexcept { std::cout << "Move constructor" << std::endl; }

    void process() & {  // Can be called on l-values
        std::cout << "Processing l-value" << std::endl;
    }

    void process() && {  // Can be called on r-values
        std::cout << "Processing r-value" << std::endl;
    }
};

int main() {
    MyClass obj;
    obj.process();  // Calls l-value version

    MyClass().process();  // Calls r-value version

    MyClass obj2 = std::move(obj);  // Move constructor called
}
