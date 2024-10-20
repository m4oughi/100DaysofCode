#include <iostream>

namespace {
    static int value = 0;  // Static variable inside unnamed namespace

    void increaseValue() {
        value++;
        std::cout << "Value: " << value << std::endl;
    }
}

int main() {
    increaseValue();  // Static variable retains its value across calls
    increaseValue();
    return 0;
}
