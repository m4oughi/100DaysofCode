#include <iostream>

namespace {
    int secretValue = 42;  // Anonymous namespace, accessible only in this file
}

int main() {
    std::cout << "Accessing value from anonymous namespace: " << secretValue << std::endl;
    return 0;
}
