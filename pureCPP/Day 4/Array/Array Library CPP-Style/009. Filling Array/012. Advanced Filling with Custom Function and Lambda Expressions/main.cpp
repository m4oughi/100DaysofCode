#include <iostream>
#include <array>
#include <functional>

int customFunction(int x) {
    return x * x - 1;  // Custom function to transform x
}

int main() {
    std::array<int, 5> arr;

    int startValue = 1;
    std::generate(arr.begin(), arr.end(), [startValue]() mutable {
        return customFunction(startValue++);  // Use custom function in lambda
    });

    for (const auto& elem : arr) {
        std::cout << elem << " ";  // Output: 0 3 8 15 24
    }
    std::cout << std::endl;

    return 0;
}