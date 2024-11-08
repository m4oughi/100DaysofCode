#include <iostream>
#include <thread>
#include <chrono>

void preciseSleep() {
    std::cout << "Thread sleeping for 500 milliseconds..." << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
    std::cout << "Thread awake after 500 milliseconds." << std::endl;
}

int main() {
    std::thread t(preciseSleep);
    t.join();
    return 0;
}
