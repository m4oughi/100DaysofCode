#include <iostream>
#include <shared_mutex>
#include <thread>

std::shared_timed_mutex mtx;

void reader(int id) {
    std::shared_lock<std::shared_timed_mutex> lock(mtx);
    std::cout << "Reader " << id << " is reading.\n";
}

void writer(int id) {
    std::unique_lock<std::shared_timed_mutex> lock(mtx);
    std::cout << "Writer " << id << " is writing.\n";
}

int main() {
    std::thread r1(reader, 1);
    std::thread r2(reader, 2);
    std::thread w1(writer, 1);
    
    r1.join();
    r2.join();
    w1.join();

    return 0;
}
