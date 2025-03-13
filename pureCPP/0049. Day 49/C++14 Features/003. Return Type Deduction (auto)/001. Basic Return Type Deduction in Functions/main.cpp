#include <iostream>

auto add(int a, int b) {
    return a + b; // Deduces int
}

int main() {
    std::cout << "Sum: " << add(3, 5) << std::endl;
    return 0;
}
