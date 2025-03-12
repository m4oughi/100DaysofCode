#include <iostream>
#include <chrono>
#include <thread>

void countdown(int seconds) {
    while (seconds > 0) {
        std::cout << "Time left: " << seconds << " seconds\n";
        std::this_thread::sleep_for(std::chrono::seconds(1));
        --seconds;
    }
    std::cout << "Time's up!\n";
}

int main() {
    countdown(5);

    return 0;
}
