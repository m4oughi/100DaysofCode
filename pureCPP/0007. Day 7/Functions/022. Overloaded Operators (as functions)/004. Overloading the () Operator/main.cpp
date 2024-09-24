#include <iostream>

class Adder {
public:
    int add(int a, int b) const {
        return a + b;
    }

    // Overload the () operator
    int operator()(int a, int b) const {
        return add(a, b);
    }
};

int main() {
    Adder adder;
    std::cout << adder(5, 3) << std::endl;  // Calls overloaded () operator
    return 0;
}
