#include <iostream>
#include <functional>

int main() {
    std::logical_or<bool> logicalOr;

    bool a = true, b = false;
    std::cout << "Logical OR of true and false: " << std::boolalpha << logicalOr(a, b) << "\n";

    return 0;
}
