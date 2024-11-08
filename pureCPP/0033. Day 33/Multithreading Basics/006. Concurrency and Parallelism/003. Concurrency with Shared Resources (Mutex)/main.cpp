#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx;
int sharedData = 0;

void increment() {
    for (int i = 0; i < 5; ++i) {
        std::lock_guard<std::mutex> lock(mtx); // Lock the mutex
        ++sharedData;
        std::cout << "Thread " << std::this_thread::get_id() << " incremented sharedData to " << sharedData << std::endl;
    }
}

int main() {
    std::thread t1(increment);
    std::thread t2(increment);

    t1.join();
    t2.join();

    std::cout << "Final value of sharedData: " << sharedData << std::endl;
    return 0;
}
