#include <iostream>
#include <chrono>

int main() {
    using namespace std::chrono;

    auto now = system_clock::now();
    auto duration_since_epoch = now.time_since_epoch();
    auto seconds = duration_cast<seconds>(duration_since_epoch).count();

    std::cout << "UTC Time (epoch seconds): " << seconds << "\n";
    return 0;
}
