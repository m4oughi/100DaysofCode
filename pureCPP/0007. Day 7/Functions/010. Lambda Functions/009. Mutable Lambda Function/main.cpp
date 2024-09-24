#include <iostream>

int main() {
    int count = 0;
    auto increment = [count]() mutable {
        ++count;
        std::cout << "Inside Lambda, count: " << count << std::endl;
    };

    increment();
    std::cout << "Outside Lambda, count: " << count << std::endl;
    return 0;
}
