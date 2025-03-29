#include <iostream>
#include <concepts>

// Concept that requires a type to support addition
template <typename T>
concept Addable = requires(T a, T b) {
    { a + b } -> std::convertible_to<T>;
};

// Function using the Addable concept
template <Addable T>
T add(T a, T b) {
    return a + b;
}

int main() {
    std::cout << add(10, 20) << '\n';  // ✅ Works
    // std::cout << add("Hello", "World"); // ❌ Compilation Error: strings don't support `+`
}
