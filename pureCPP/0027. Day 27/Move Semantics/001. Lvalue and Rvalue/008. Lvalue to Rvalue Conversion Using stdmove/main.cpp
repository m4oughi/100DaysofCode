#include <iostream>
#include <utility>

int main() {
    int a = 5;
    int &&rref = std::move(a);  // std::move converts Lvalue to Rvalue reference
    std::cout << "Rvalue reference: " << rref << std::endl;
    return 0;
}
