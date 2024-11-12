#include <iostream>
#include <mutex>
#include <memory>

std::mutex mtx;
std::unique_ptr<int> data = nullptr;

void initializeData() {
    if (!data) { // First check (not locked)
        std::lock_guard<std::mutex> lock(mtx);
        if (!data) { // Second check (locked)
            data = std::make_unique<int>(42);
            std::cout << "Data initialized to 42\n";
        }
    } else {
        std::cout << "Data already initialized\n";
    }
}

int main() {
    std::thread t1(initializeData);
    std::thread t2(initializeData);

    t1.join();
    t2.join();

    return 0;
}
