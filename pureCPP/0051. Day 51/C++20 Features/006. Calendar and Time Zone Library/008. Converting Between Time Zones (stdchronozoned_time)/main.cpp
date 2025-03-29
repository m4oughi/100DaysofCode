#include <iostream>
#include <chrono>
#include <format>

int main() {
    using namespace std::chrono;

    zoned_time current_time{"America/New_York", system_clock::now()};
    std::cout << std::format("New York time: {:%Y-%m-%d %H:%M:%S %Z}\n", current_time);
}
