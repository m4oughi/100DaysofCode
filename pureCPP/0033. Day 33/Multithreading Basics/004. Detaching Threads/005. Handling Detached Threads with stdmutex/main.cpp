#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx;

void taskWithMutex(int& counter) {
    for (int i = 0; i < 5; ++i) {
        std::lock_guard<std::mutex> lock(mtx);
        ++counter;
        std::cout << "Counter: " << counter << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
    }
}

int main() {
    int counter = 0;

    std::thread t1(taskWithMutex, std::ref(counter));
    t1.detach(); // Detach the thread

    std::this_thread::sleep_for(std::chrono::seconds(3)); // Give time for detached thread to finish
    std::cout << "Final counter: " << counter << std::endl;
    return 0;
}
