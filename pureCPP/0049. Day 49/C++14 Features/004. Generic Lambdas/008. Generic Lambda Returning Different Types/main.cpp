#include <iostream>

int main() {
    auto getValue = [](auto flag) {
        return flag ? 42 : 3.14; // Deduces double
    };

    std::cout << "Returned Value: " << getValue(true) << std::endl;

    return 0;
}
