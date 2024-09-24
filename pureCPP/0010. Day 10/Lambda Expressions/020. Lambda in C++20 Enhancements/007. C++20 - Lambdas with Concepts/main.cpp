#include <iostream>
#include <concepts>

// Concept definition
template<typename T>
concept Addable = requires(T a, T b) {
    a + b;
};

int main() {
    auto add = []<Addable T>(T a, T b) {
        return a + b;
    };

    std::cout << "Sum of 10 and 20: " << add(10, 20) << std::endl;    // Outputs: 30
    std::cout << "Sum of 1.1 and 2.2: " << add(1.1, 2.2) << std::endl; // Outputs: 3.3

    // add("Hello", "World"); // Compile error: std::string does not satisfy 'Addable'
    return 0;
}
