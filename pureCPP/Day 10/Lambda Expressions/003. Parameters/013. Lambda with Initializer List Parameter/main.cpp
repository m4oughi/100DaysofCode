#include <iostream>
#include <initializer_list>

int main() {
    // Lambda with initializer list parameter
    auto sum = [](std::initializer_list<int> list) {
        int total = 0;
        for (int x : list) {
            total += x;
        }
        return total;
    };
    std::cout << "Sum: " << sum({1, 2, 3, 4, 5}) << std::endl; // Outputs Sum: 15
    return 0;
}
