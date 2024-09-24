#include <iostream>

// Function accepting a lambda as a callback
void process(int x, void (*callback)(int)) {
    callback(x);
}

int main() {
    auto printDouble = [](int n) {
        std::cout << "Double: " << n * 2 << std::endl;
    };

    process(5, printDouble); // Outputs: Double: 10
    return 0;
}
