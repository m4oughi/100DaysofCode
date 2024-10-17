#include <vector>
#include <iostream>

std::vector<int> createVector() {
    return std::vector<int>{1, 2, 3};  // Returns a temporary vector (Rvalue)
}

int main() {
    std::vector<int> vec = createVector();  // Uses move semantics to avoid copying
    std::cout << "Vector size: " << vec.size();  // Prints 3
    return 0;
}
