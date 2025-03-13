#include <iostream>

auto chooseValue(bool flag) {
    return flag ? 42 : 3.14; // Deduces double (common type)
}

int main() {
    std::cout << "Chosen Value: " << chooseValue(true) << std::endl;
    return 0;
}
