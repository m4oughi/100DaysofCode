#include <iostream>
#include <concepts>

// Concept requiring a type to have `size()` and `empty()`
template <typename T>
concept HasSizeAndEmpty = requires(T t) {
    { t.size() } -> std::convertible_to<std::size_t>;
    { t.empty() } -> std::convertible_to<bool>;
};

// Function that only accepts objects with `size()` and `empty()`
template <HasSizeAndEmpty T>
void printSize(const T& container) {
    std::cout << "Size: " << container.size() << '\n';
}

#include <vector>
#include <string>

int main() {
    std::vector<int> vec = {1, 2, 3};
    printSize(vec);  // ✅ Works
    
    std::string str = "Hello";
    printSize(str);  // ✅ Works

    // printSize(42); // ❌ Compilation Error: int does not have size()
}
