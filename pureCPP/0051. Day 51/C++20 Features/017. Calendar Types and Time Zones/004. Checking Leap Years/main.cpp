#include <iostream>
#include <chrono>

bool isLeapYear(std::chrono::year y) {
    return y.is_leap();
}

int main() {
    using namespace std::chrono;

    std::cout << "2024 is leap year: " << isLeapYear(2024y) << "\n";
    std::cout << "2025 is leap year: " << isLeapYear(2025y) << "\n";

    return 0;
}
