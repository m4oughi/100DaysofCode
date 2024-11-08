#include <iostream>
#include <thread>
#include <chrono>

void printMessage() {
    std::cout << "Thread started, sleeping for 2 seconds..." << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout << "Thread awake after 2 seconds." << std::endl;
}

int main() {
    std::thread t(printMessage);
    t.join();
    return 0;
}
