#include <iostream>
#include <thread>
#include <chrono>

void printMessageAtTime() {
    auto wakeUpTime = std::chrono::steady_clock::now() + std::chrono::seconds(3);
    std::cout << "Thread sleeping until 3 seconds from now..." << std::endl;
    std::this_thread::sleep_until(wakeUpTime);
    std::cout << "Thread awake after 3 seconds." << std::endl;
}

int main() {
    std::thread t(printMessageAtTime);
    t.join();
    return 0;
}
