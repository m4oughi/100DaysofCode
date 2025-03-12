#include <iostream>

template <typename T>
void print(T arg) {
    std::cout << arg << std::endl;
}

template <typename T, typename... Args>
void print(T first, Args... rest) {
    std::cout << first << " ";
    print(rest...);
}

int main() {
    print(1, 2.5, "Hello", 'A');
    return 0;
}
