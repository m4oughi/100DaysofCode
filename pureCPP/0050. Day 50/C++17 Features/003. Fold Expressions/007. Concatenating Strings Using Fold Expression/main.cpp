#include <iostream>
#include <string>

template <typename... Args>
std::string concatenate(Args... args) {
    return (args + ...);  // Right fold for string concatenation
}

int main() {
    std::string result = concatenate("Hello", " ", "C++", "17", "!");
    std::cout << result << '\n';
    return 0;
}
