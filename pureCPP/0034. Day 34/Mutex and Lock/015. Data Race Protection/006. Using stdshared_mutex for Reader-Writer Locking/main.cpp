#include <iostream>
#include <shared_mutex>
#include <thread>

std::shared_mutex rw_mtx;
int sharedResource = 0;

void readResource() {
    std::shared_lock<std::shared_mutex> lock(rw_mtx); // Shared lock for reading
    std::cout << "Reading shared resource: " << sharedResource << "\n";
}

void writeResource() {
    std::unique_lock<std::shared_mutex> lock(rw_mtx); // Unique lock for writing
    ++sharedResource;
    std::cout << "Writing to shared resource: " << sharedResource << "\n";
}

int main() {
    std::thread t1(readResource);
    std::thread t2(writeResource);
    std::thread t3(readResource);

    t1.join();
    t2.join();
    t3.join();

    return 0;
}
