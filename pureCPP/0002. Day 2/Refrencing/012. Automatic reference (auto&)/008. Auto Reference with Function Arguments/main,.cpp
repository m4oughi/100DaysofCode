#include <iostream>

template<typename T>
void process(T& value) {
    auto& ref = value;  // auto& deduces that ref is a reference to value
    ref += 10;  // Modify the original variable
}

int main() {
    int x = 70;
    process(x);  // x is passed by reference
    std::cout << x << std::endl;  // Output: 80

    return 0;
}