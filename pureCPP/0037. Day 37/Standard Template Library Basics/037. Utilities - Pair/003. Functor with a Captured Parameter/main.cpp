#include <iostream>

class MultiplyBy {
    int factor;
public:
    MultiplyBy(int f) : factor(f) {}
    int operator()(int value) const {
        return value * factor;
    }
};

int main() {
    MultiplyBy multiplyBy5(5);
    std::cout << "10 * 5 = " << multiplyBy5(10) << "\n";
    return 0;
}
