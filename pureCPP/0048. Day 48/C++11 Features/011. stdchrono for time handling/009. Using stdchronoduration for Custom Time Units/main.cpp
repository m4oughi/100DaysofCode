#include <iostream>
#include <chrono>

int main() {
    std::chrono::duration<int, std::ratio<60>> one_minute(1);
    std::cout << "One minute has " << one_minute.count() << " units of 60 seconds each.\n";

    return 0;
}
