#include <iostream>
#include <memory>

class Example {
public:
    Example() { std::cout << "Example Constructor\n"; }
    ~Example() { std::cout << "Example Destructor\n"; }
};

std::unique_ptr<Example> createExample() {
    return std::make_unique<Example>(); // RVO applies to smart pointers too
}

int main() {
    auto ptr = createExample();
    return 0;
}
