#include <iostream>

int main() {
    int count = 5;
    auto increment = [&count]() {
        count++;
    };

    increment();
    std::cout << "Modified count: " << count << std::endl; // Outputs: Modified count: 6
    return 0;
}
