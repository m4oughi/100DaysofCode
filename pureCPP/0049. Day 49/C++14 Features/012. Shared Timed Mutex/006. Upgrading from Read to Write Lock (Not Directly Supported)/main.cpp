#include <iostream>
#include <shared_mutex>
#include <thread>

std::shared_timed_mutex mtx;
int shared_data = 0;

void upgrade_lock(int id) {
    std::shared_lock<std::shared_timed_mutex> read_lock(mtx);
    std::cout << "Reader " << id << " sees value: " << shared_data << "\n";

    read_lock.unlock(); // Release shared lock

    std::unique_lock<std::shared_timed_mutex> write_lock(mtx);
    shared_data += 10;
    std::cout << "Writer " << id << " updated value to: " << shared_data << "\n";
}

int main() {
    std::thread t1(upgrade_lock, 1);
    std::thread t2(upgrade_lock, 2);

    t1.join();
    t2.join();

    return 0;
}
