#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx;

int main() {
    int sharedValue = 0;
    std::thread t([&]() {
        std::lock_guard<std::mutex> lock(mtx);
        sharedValue += 10;
        std::cout << "Thread: Shared value = " << sharedValue << std::endl;
    });

    {
        std::lock_guard<std::mutex> lock(mtx);
        sharedValue += 20;
        std::cout << "Main: Shared value = " << sharedValue << std::endl;
    }

    t.join();
    return 0;
}
