#include <iostream>
#include <functional>

class Add {
public:
    int operator()(int a, int b) const {
        return a + b;
    }
};

class Multiply {
public:
    int operator()(int a, int b) const {
        return a * b;
    }
};

int main() {
    Add add;
    Multiply multiply;

    int result = multiply(add(2, 3), 4); // (2 + 3) * 4
    std::cout << "Result: " << result << "\n";

    return 0;
}
