#include <iostream>

struct Data {
    [[maybe_unused]] int value;  // Suppress unused variable warning
};

int main() {
    Data d;  // Even if 'value' is not used, no warning is generated

    return 0;
}
