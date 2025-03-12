#include <iostream>
#include <chrono>

int main() {
    std::chrono::seconds sec(60);
    std::chrono::minutes min = std::chrono::duration_cast<std::chrono::minutes>(sec);

    std::cout << "60 seconds is " << min.count() << " minute(s)\n";

    return 0;
}
