#include <iostream>
#include <thread>
#include <mutex>

std::recursive_mutex r_mtx;

void worker(int id, int depth) {
    r_mtx.lock();
    std::cout << "Thread " << id << " acquired lock at depth " << depth << std::endl;
    if (depth > 0) {
        worker(id, depth - 1);
    }
    std::cout << "Thread " << id << " releasing lock at depth " << depth << std::endl;
    r_mtx.unlock();
}

int main() {
    std::thread t1(worker, 1, 2);
    std::thread t2(worker, 2, 2);

    t1.join();
    t2.join();

    return 0;
}
