#include <iostream>

namespace {
    void helperFunction() {
        std::cout << "Helper function for internal use" << std::endl;
    }
}

void publicFunction() {
    std::cout << "Public function" << std::endl;
    helperFunction();  // Uses the helper function inside unnamed namespace
}

int main() {
    publicFunction();
    // helperFunction();  // This would cause an error as it is not accessible here
    return 0;
}
