#include <iostream>

int main() {
    int count = 5;

    auto lambda = [x = count]() mutable {
        x += 1;
        std::cout << "Inside Lambda: " << x << std::endl;
    };

    lambda(); // Output: Inside Lambda: 6
    lambda(); // Output: Inside Lambda: 7

    std::cout << "Outside Lambda: " << count << std::endl; // Output: Outside Lambda: 5

    return 0;
}
