#include <iostream>
#include <chrono>
#include <format>

int main() {
    auto now = std::chrono::system_clock::now();
    std::cout << std::format("Current time: {:%Y-%m-%d %H:%M:%S}\n", now);
}
