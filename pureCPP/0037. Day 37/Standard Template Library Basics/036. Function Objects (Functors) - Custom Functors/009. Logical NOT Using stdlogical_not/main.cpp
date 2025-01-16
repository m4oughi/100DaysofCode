#include <iostream>
#include <functional>

int main() {
    std::logical_not<bool> logicalNot;

    bool a = true;
    std::cout << "Logical NOT of true: " << std::boolalpha << logicalNot(a) << "\n";

    return 0;
}
