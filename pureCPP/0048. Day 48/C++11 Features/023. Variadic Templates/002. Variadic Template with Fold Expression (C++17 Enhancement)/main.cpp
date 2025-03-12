#include <iostream>

template <typename... Args>
void print(Args... args) {
    ((std::cout << args << " "), ...);
    std::cout << std::endl;
}

int main() {
    print(10, "world", 3.14, 'X');
    return 0;
}
