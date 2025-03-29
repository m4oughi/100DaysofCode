#include <iostream>
#include <chrono>

int main() {
    auto now = std::chrono::system_clock::now();
    std::time_t now_c = std::chrono::system_clock::to_time_t(now);

    std::cout << "Current system time: " << std::ctime(&now_c);
}
