#include <iostream>

class Example {
public:
    Example() { std::cout << "Example Constructor\n"; }
    Example(const Example&) = delete;  // No copy allowed
    Example(Example&&) = delete;       // No move allowed
};

Example createExample() {
    return Example(); // Still valid due to mandatory RVO
}

int main() {
    Example ex = createExample();
    return 0;
}
