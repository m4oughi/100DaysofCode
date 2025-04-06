#include <iostream>

class Math {
public:
    constexpr int add(int a, int b) const {
        return a + b;
    }
};

int main() {
    constexpr Math math;
    constexpr int sum = math.add(4, 5); // Compile-time evaluation
    std::cout << "Sum: " << sum << '\n';
    return 0;
}
