#include <iostream>
#include <memory>
#include <atomic>
#include <thread>
#include <vector>

std::atomic<std::shared_ptr<int>> atomic_sp(std::make_shared<int>(0));

void writer(int id) {
    for (int i = 0; i < 3; ++i) {
        std::shared_ptr<int> new_value = std::make_shared<int>(id * 100 + i);
        atomic_sp.store(new_value);
        std::cout << "Writer " << id << " updated value to " << *new_value << '\n';
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
}

void reader(int id) {
    for (int i = 0; i < 3; ++i) {
        std::shared_ptr<int> sp = atomic_sp.load();
        std::cout << "Reader " << id << " sees value: " << *sp << '\n';
        std::this_thread::sleep_for(std::chrono::milliseconds(50));
    }
}

int main() {
    std::vector<std::thread> threads;
    for (int i = 0; i < 3; ++i) threads.emplace_back(writer, i);
    for (int i = 0; i < 2; ++i) threads.emplace_back(reader, i);

    for (auto& t : threads) t.join();
}
