#include <iostream>

// Template function declaration (prototype)
template <typename T>
T add(T a, T b);

int main() {
    std::cout << add(3, 4) << std::endl;           // Works with int
    std::cout << add(3.5, 4.2) << std::endl;       // Works with double
    return 0;
}

// Template function definition
template <typename T>
T add(T a, T b) {
    return a + b;
}
