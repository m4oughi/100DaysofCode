#include <iostream>
#include <vector>

// Inline template function
template <typename T>
inline void printVector(const std::vector<T>& vec) {
    for (const T& item : vec) {
        std::cout << item << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> numbers(1000, 42);
    printVector(numbers); // Large template function inlining may lead to code bloat
    return 0;
}
