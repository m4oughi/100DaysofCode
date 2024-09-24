#include <iostream>

class Power {
public:
    int operator()(int base, int exp) const {
        int result = 1;
        for (int i = 0; i < exp; ++i) {
            result *= base;
        }
        return result;
    }
};

int main() {
    Power power;
    std::cout << "2^3 = " << power(2, 3) << std::endl;  // Output: 2^3 = 8
    return 0;
}
