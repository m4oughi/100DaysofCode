#include <iostream>
#include <chrono>

int main() {
    using namespace std::chrono;

    auto now = system_clock::now();
    
    zoned_time utc_time{"UTC", now};
    zoned_time ny_time{"America/New_York", utc_time};

    std::cout << "UTC time: " << utc_time << "\n";
    std::cout << "New York time: " << ny_time << "\n";

    return 0;
}
