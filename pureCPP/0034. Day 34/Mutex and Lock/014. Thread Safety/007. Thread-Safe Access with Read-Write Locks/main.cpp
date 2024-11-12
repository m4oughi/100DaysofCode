#include <iostream>
#include <shared_mutex>
#include <thread>

std::shared_mutex rw_mtx;
int sharedData = 0;

void reader() {
    std::shared_lock<std::shared_mutex> lock(rw_mtx); // Shared lock for reading
    std::cout << "Reading shared data: " << sharedData << "\n";
}

void writer() {
    std::unique_lock<std::shared_mutex> lock(rw_mtx); // Unique lock for writing
    ++sharedData;
    std::cout << "Writing to shared data: " << sharedData << "\n";
}

int main() {
    std::thread t1(reader);
    std::thread t2(writer);
    std::thread t3(reader);

    t1.join();
    t2.join();
    t3.join();

    return 0;
}
