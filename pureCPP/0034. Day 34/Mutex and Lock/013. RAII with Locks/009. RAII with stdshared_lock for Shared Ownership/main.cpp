#include <iostream>
#include <shared_mutex>
#include <thread>

std::shared_mutex sh_mtx;

void readFunction() {
    std::shared_lock<std::shared_mutex> lock(sh_mtx); // Shared lock for reading
    std::cout << "Read lock acquired\n";
    // Automatically released when lock goes out of scope
}

void writeFunction() {
    std::unique_lock<std::shared_mutex> lock(sh_mtx); // Unique lock for writing
    std::cout << "Write lock acquired\n";
    // Automatically released when lock goes out of scope
}

int main() {
    std::thread reader1(readFunction);
    std::thread reader2(readFunction);
    std::thread writer(writeFunction);

    reader1.join();
    reader2.join();
    writer.join();
    return 0;
}
