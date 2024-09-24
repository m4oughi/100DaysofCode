#include <iostream>

class Adder {
public:
    int operator()(int a, int b) const {
        return a + b;
    }
};

int main() {
    Adder adder;
    int result = adder(5, 3);  // Calls the functor
    std::cout << "Result: " << result << std::endl;  // Output: Result: 8
    return 0;
}
