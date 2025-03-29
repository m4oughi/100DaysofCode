#include <iostream>
#include <format>

int main() {
    bool flag = true;
    char letter = 'A';
    int* ptr = nullptr;

    std::cout << std::format("Boolean: {}\n", flag);
    std::cout << std::format("Character: {}\n", letter);
    std::cout << std::format("Pointer: {}\n", static_cast<void*>(ptr));

    return 0;
}
