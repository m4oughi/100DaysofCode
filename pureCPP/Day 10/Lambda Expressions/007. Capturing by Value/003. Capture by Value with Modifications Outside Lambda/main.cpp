#include <iostream>

int main() {
    int num = 42;
    auto display = [num]() {
        std::cout << "Captured num: " << num << std::endl;
    };

    num = 100; // Modifying num outside the lambda
    display(); // Outputs: Captured num: 42
    return 0;
}
