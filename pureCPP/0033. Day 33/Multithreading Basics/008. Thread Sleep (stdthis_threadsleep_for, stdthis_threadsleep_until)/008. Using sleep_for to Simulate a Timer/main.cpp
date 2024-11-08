#include <iostream>
#include <thread>
#include <chrono>

void countdown(int seconds) {
    while (seconds > 0) {
        std::cout << "Time remaining: " << seconds << " seconds" << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(1));
        --seconds;
    }
    std::cout << "Time's up!" << std::endl;
}

int main() {
    std::thread t(countdown, 10); // Countdown from 10 seconds
    t.join();
    return 0;
}
