#include <iostream>
#include <thread>

void infiniteLoop() {
    while (true) {
        std::cout << "Detached thread running endlessly..." << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
}

int main() {
    std::thread t1(infiniteLoop);
    t1.detach(); // The thread will run indefinitely

    std::cout << "Main thread continues execution..." << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(5)); // Wait a bit, then main thread exits
    return 0;
}
