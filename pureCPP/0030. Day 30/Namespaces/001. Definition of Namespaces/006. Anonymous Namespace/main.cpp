#include <iostream>

namespace {
    int hiddenFunction() {
        return 42;
    }
}

int main() {
    std::cout << "Value from hidden function: " << hiddenFunction() << std::endl;
    return 0;
}
