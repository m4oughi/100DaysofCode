#include <iostream>

namespace {
    void secretFunction() {
        std::cout << "This is a function hidden from other files." << std::endl;
    }

    int secretValue = 42;
}

int main() {
    secretFunction();  // Can access within the same file
    std::cout << "Secret value: " << secretValue << std::endl;
    return 0;
}
