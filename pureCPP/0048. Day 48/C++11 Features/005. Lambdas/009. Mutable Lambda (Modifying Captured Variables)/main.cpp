#include <iostream>

int main() {
    int count = 0;

    auto increment = [count]() mutable {
        count++;
        std::cout << "Count inside lambda: " << count << std::endl;
    };

    increment();
    increment();

    std::cout << "Count outside lambda: " << count << std::endl;

    return 0;
}
