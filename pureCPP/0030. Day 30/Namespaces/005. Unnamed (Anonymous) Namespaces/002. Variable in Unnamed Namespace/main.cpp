#include <iostream>

namespace {
    int secretValue = 42;  // Variable only accessible within this file
}

int main() {
    std::cout << "Secret Value: " << secretValue << std::endl;
    return 0;
}
