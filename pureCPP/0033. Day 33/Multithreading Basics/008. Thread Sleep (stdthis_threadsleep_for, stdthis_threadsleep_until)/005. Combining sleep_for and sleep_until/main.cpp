#include <iostream>
#include <thread>
#include <chrono>

void combinedSleep() {
    std::cout << "Thread sleeping for 2 seconds..." << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(2));

    auto futureTime = std::chrono::steady_clock::now() + std::chrono::seconds(2);
    std::cout << "Now sleeping until 2 seconds from now..." << std::endl;
    std::this_thread::sleep_until(futureTime);

    std::cout << "Thread awake after combined sleep." << std::endl;
}

int main() {
    std::thread t(combinedSleep);
    t.join();
    return 0;
}
