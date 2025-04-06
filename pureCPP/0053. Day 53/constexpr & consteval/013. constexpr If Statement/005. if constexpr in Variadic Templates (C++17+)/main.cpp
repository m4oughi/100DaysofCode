#include <iostream>

template <typename T, typename... Args>
void printAll(T first, Args... args) {
    std::cout << first << " ";
    if constexpr (sizeof...(args) > 0) {
        printAll(args...);  // ✅ Recursively call only if there are remaining arguments
    }
}

int main() {
    printAll(1, 2.5, "Hello", 'A');  // ✅ 1 2.5 Hello A
}
