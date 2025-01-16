#include <iostream>
#include <functional>

int main() {
    std::logical_and<bool> logicalAnd;

    bool a = true, b = false;
    std::cout << "Logical AND of true and false: " << std::boolalpha << logicalAnd(a, b) << "\n";

    return 0;
}
