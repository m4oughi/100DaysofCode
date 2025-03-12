#include <iostream>
#include <chrono>
#include <iomanip>

int main() {
    auto now = std::chrono::system_clock::now();
    std::time_t now_time = std::chrono::system_clock::to_time_t(now);

    std::cout << "Formatted time: " << std::put_time(std::localtime(&now_time), "%Y-%m-%d %H:%M:%S") << "\n";

    return 0;
}
