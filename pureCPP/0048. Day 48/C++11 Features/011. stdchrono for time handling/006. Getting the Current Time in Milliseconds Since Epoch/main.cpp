#include <iostream>
#include <chrono>

int main() {
    auto now = std::chrono::system_clock::now();
    auto duration = now.time_since_epoch();
    auto millis = std::chrono::duration_cast<std::chrono::milliseconds>(duration);

    std::cout << "Milliseconds since epoch: " << millis.count() << "\n";

    return 0;
}
