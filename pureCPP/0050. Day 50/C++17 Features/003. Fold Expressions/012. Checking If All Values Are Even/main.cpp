#include <iostream>

template <typename... Args>
bool allEven(Args... args) {
    return (... && (args % 2 == 0));
}

int main() {
    std::cout << std::boolalpha;
    std::cout << "All Even: " << allEven(2, 4, 6, 8) << '\n';
    std::cout << "All Even: " << allEven(2, 4, 7, 8) << '\n';
    return 0;
}
