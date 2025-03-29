#include <iostream>
#include <memory>
#include <atomic>
#include <thread>

std::atomic<std::shared_ptr<int>> atomic_sp(std::make_shared<int>(100));

void updater() {
    std::shared_ptr<int> expected = atomic_sp.load();
    std::shared_ptr<int> new_value = std::make_shared<int>(200);

    if (atomic_sp.compare_exchange_strong(expected, new_value)) {
        std::cout << "Updated successfully!\n";
    } else {
        std::cout << "Update failed, another thread modified it!\n";
    }
}

int main() {
    std::thread t1(updater);
    std::thread t2(updater);

    t1.join();
    t2.join();

    std::cout << "Final Value: " << *atomic_sp.load() << '\n';
}
