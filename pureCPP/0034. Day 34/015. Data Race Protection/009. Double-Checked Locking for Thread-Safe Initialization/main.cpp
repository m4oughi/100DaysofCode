#include <iostream>
#include <mutex>
#include <memory>

std::mutex mtx;
std::unique_ptr<int> sharedValue = nullptr;

void initialize() {
    if (!sharedValue) { // First check without lock
        std::lock_guard<std::mutex> lock(mtx);
        if (!sharedValue) { // Second check with lock
            sharedValue = std::make_unique<int>(42);
            std::cout << "Shared value initialized to 42\n";
        }
    }
}

int main() {
    std::thread t1(initialize);
    std::thread t2(initialize);

    t1.join();
    t2.join();

    return 0;
}
