#include <iostream>
#include <functional>

void print(int n) {
    std::cout << "Number: " << n << std::endl;
}

int main() {
    std::function<void(int)> funcPtr = print;  // Store a function pointer in std::function
    funcPtr(5);  // Output: Number: 5

    return 0;
}
