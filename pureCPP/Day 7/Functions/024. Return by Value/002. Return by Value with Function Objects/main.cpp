#include <iostream>

class Multiplier {
private:
    int factor;

public:
    Multiplier(int f) : factor(f) {}

    int operator()(int value) const {
        return value * factor;  // Return by value
    }
};

int main() {
    Multiplier tripler(3);
    int result = tripler(7);
    std::cout << "7 multiplied by 3 is " << result << std::endl;  // Output: 7 multiplied by 3 is 21
    return 0;
}
