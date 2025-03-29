#include <iostream>
#include <memory>
#include <atomic>
#include <thread>

std::atomic<std::shared_ptr<int>> atomic_sp;

void reader() {
    for (int i = 0; i < 5; ++i) {
        std::shared_ptr<int> sp = atomic_sp.load();
        if (sp) std::cout << "Reader: " << *sp << '\n';
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
}

void writer() {
    for (int i = 0; i < 5; ++i) {
        std::shared_ptr<int> new_sp = std::make_shared<int>(i * 10);
        atomic_sp.store(new_sp);
        std::cout << "Writer: Updated to " << *new_sp << '\n';
        std::this_thread::sleep_for(std::chrono::milliseconds(200));
    }
}

int main() {
    atomic_sp.store(std::make_shared<int>(0));

    std::thread t1(reader);
    std::thread t2(writer);

    t1.join();
    t2.join();
}
