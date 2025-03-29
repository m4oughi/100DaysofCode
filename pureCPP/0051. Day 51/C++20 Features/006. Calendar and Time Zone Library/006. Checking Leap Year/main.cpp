#include <iostream>
#include <chrono>

int main() {
    using namespace std::chrono;

    year y1 = 2024y, y2 = 2025y;

    std::cout << "2024 is a leap year: " << std::boolalpha << y1.is_leap() << "\n";
    std::cout << "2025 is a leap year: " << std::boolalpha << y2.is_leap() << "\n";
}
