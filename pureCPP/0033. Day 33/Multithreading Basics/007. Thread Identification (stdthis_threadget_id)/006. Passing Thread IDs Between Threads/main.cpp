#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx;

void worker(std::thread::id mainId) {
    std::lock_guard<std::mutex> lock(mtx);
    std::cout << "Worker Thread ID: " << std::this_thread::get_id() << std::endl;
    std::cout << "Main Thread ID passed to worker: " << mainId << std::endl;
}

int main() {
    std::thread::id mainId = std::this_thread::get_id();
    std::cout << "Main Thread ID: " << mainId << std::endl;

    std::thread t(worker, mainId);
    t.join();

    return 0;
}
