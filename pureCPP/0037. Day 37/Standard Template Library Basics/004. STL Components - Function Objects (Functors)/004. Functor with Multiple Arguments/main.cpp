#include <iostream>

class Multiply {
public:
    int operator()(int a, int b) const {
        return a * b;
    }
};

int main() {
    Multiply multiply;
    std::cout << "Multiplying 3 and 4: " << multiply(3, 4) << std::endl;
    return 0;
}
