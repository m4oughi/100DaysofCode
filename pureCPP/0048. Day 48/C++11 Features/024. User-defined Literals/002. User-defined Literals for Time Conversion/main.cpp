#include <iostream>
#include <chrono>

constexpr std::chrono::seconds operator"" _minutes(unsigned long long m) {
    return std::chrono::seconds(m * 60);
}

int main() {
    auto duration = 5_minutes;
    std::cout << "5 minutes is " << duration.count() << " seconds\n";
    return 0;
}
