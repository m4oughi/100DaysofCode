#include <iostream>
#include <memory>
#include <atomic>
#include <thread>

std::atomic<std::weak_ptr<int>> atomic_wp;

void observer() {
    for (int i = 0; i < 5; ++i) {
        std::shared_ptr<int> sp = atomic_wp.load().lock();  
        if (sp) {
            std::cout << "Observer sees value: " << *sp << '\n';
        } else {
            std::cout << "Observer sees expired pointer\n";
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
}

void creator() {
    {
        std::shared_ptr<int> sp = std::make_shared<int>(50);
        atomic_wp.store(sp);
        std::this_thread::sleep_for(std::chrono::milliseconds(300));  // Let observer access it
    } // Shared pointer goes out of scope and gets destroyed
}

int main() {
    std::thread t1(observer);
    std::thread t2(creator);

    t1.join();
    t2.join();
}
