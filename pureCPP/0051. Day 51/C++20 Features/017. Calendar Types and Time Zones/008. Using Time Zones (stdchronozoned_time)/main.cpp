#include <iostream>
#include <chrono>
#include <iomanip>

int main() {
    using namespace std::chrono;

    auto now = system_clock::now();
    zoned_time zt{"America/New_York", now};

    std::cout << "Current time in New York: " << zt << "\n";
    return 0;
}
