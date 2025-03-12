#include <iostream>

void exampleFunction() {
    [[maybe_unused]] int temp = 42; // Avoids unused variable warning
}

int main() {
    exampleFunction();
    return 0;
}
