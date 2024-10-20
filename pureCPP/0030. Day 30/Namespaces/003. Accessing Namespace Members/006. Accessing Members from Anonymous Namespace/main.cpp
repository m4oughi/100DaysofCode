#include <iostream>

namespace {
    int secretValue = 42;

    void displaySecret() {
        std::cout << "Secret Value: " << secretValue << std::endl;
    }
}

int main() {
    displaySecret();  // Accessing members directly, since they are in an anonymous namespace
    return 0;
}
