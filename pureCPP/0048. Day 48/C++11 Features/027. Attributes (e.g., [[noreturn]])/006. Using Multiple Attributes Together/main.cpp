#include <iostream>

[[nodiscard]] int computeValue() {
    return 42;
}

[[deprecated("Use computeValue() instead.")]]
int oldCompute() {
    return 24;
}

int main() {
    computeValue(); // Warning: Value is discarded
    oldCompute(); // Warning: Function is deprecated
    return 0;
}
