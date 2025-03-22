#include <iostream>

void printValue(int x) {
    std::cout << "Value: " << x << '\n';
}

template <typename... Args>
void callFunction(Args... args) {
    (printValue(args), ...);  // Unary right fold calling a function
}

int main() {
    callFunction(10, 20, 30, 40);
    return 0;
}
