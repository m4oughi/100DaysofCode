#include <iostream>
#include <vector>
#include <concepts>

// Concept for arithmetic types
template <typename T>
concept Arithmetic = std::integral<T> || std::floating_point<T>;

// Concept for a container of arithmetic elements
template <typename Container>
concept ArithmeticContainer = requires(Container c) {
    typename Container::value_type;
    requires Arithmetic<typename Container::value_type>;
};

// Function using the nested concept
template <ArithmeticContainer C>
void printSum(const C& container) {
    typename C::value_type sum = 0;
    for (const auto& elem : container) {
        sum += elem;
    }
    std::cout << "Sum: " << sum << '\n';
}

int main() {
    std::vector<int> vec = {1, 2, 3, 4};
    printSum(vec);  // ✅ Works

    // std::vector<std::string> strVec = {"hello", "world"};
    // printSum(strVec); // ❌ Compilation Error
}
