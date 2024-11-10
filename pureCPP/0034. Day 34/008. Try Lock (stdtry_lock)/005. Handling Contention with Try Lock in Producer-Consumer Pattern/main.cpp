#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx;
int resource = 0;

void producer() {
    for (int i = 0; i < 5; ++i) {
        if (mtx.try_lock()) {
            ++resource;
            std::cout << "Produced item, current count: " << resource << "\n";
            mtx.unlock();
            std::this_thread::sleep_for(std::chrono::milliseconds(50)); // Simulate work
        }
    }
}

void consumer() {
    for (int i = 0; i < 5; ++i) {
        if (mtx.try_lock()) {
            if (resource > 0) {
                --resource;
                std::cout << "Consumed item, current count: " << resource << "\n";
            } else {
                std::cout << "No item to consume.\n";
            }
            mtx.unlock();
            std::this_thread::sleep_for(std::chrono::milliseconds(50));
        }
    }
}

int main() {
    std::thread t1(producer);
    std::thread t2(consumer);

    t1.join();
    t2.join();

    return 0;
}
