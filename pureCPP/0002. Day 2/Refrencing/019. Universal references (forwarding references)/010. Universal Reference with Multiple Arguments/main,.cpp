#include <iostream>
#include <utility>  // For std::forward

template<typename... Args>
void processAll(Args&&... args) {
    (std::cout << ... << std::forward<Args>(args) << " ");  // Fold expression
    std::cout << std::endl;
}

int main() {
    int a = 1;
    processAll(a, 2, 3.5, "world");  // lvalue and rvalues

    return 0;
}
