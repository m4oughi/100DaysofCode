#include <iostream>
#include <thread>
#include <shared_mutex>

std::shared_mutex rw_mutex;
int data = 0;

void reader(int id) {
    std::shared_lock<std::shared_mutex> lock(rw_mutex);
    std::cout << "Reader " << id << " sees data: " << data << "\n";
}

void writer(int newData) {
    std::unique_lock<std::shared_mutex> lock(rw_mutex);
    data = newData;
    std::cout << "Writer updated data to " << data << "\n";
}

int main() {
    std::thread r1(reader, 1);
    std::thread r2(reader, 2);
    std::thread w(writer, 100);

    r1.join();
    r2.join();
    w.join();

    return 0;
}
