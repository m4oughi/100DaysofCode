#include <iostream>
#include <shared_mutex>
#include <thread>
#include <vector>
#include <chrono>

std::shared_timed_mutex mtx;
int shared_data = 0;

void reader(int id) {
    std::shared_lock<std::shared_timed_mutex> lock(mtx);
    std::cout << "Reader " << id << " sees value: " << shared_data << "\n";
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
}

void writer(int id) {
    std::unique_lock<std::shared_timed_mutex> lock(mtx);
    ++shared_data;
    std::cout << "Writer " << id << " updated value to: " << shared_data << "\n";
    std::this_thread::sleep_for(std::chrono::milliseconds(200));
}

int main() {
    std::vector<std::thread> threads;

    for (int i = 0; i < 5; ++i) {
        threads.push_back(std::thread(reader, i));
    }

    threads.push_back(std::thread(writer, 1));
    threads.push_back(std::thread(writer, 2));

    for (auto& th : threads) {
        th.join();
    }

    return 0;
}
