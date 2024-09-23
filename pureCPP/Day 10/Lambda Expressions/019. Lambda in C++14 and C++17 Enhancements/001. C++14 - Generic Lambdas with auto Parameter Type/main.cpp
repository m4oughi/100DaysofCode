#include <iostream>

int main() {
    // C++14 allows using 'auto' in lambda parameters
    auto add = [](auto a, auto b) {
        return a + b;
    };

    std::cout << "Sum of 5 and 3: " << add(5, 3) << std::endl;       // Outputs: 8
    std::cout << "Sum of 2.5 and 4.3: " << add(2.5, 4.3) << std::endl; // Outputs: 6.8
    return 0;
}
