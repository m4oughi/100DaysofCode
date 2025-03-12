#include <iostream>

auto getNumber() {
    return 42;  // auto deduces as int
}

int main() {
    auto num = getNumber();
    std::cout << "Number: " << num << std::endl;
    return 0;
}
