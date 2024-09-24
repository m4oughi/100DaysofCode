#include <iostream>

class Multiplier {
private:
    int factor;

public:
    Multiplier(int f) : factor(f) {}

    int operator()(int value) const {
        return value * factor;
    }
};

int main() {
    Multiplier triple(3);
    std::cout << "Result: " << triple(4) << std::endl;  // Output: Result: 12
    return 0;
}
