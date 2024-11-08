#include <iostream>
#include <thread>
#include <mutex>

std::recursive_mutex recursive_mtx;
std::mutex standard_mtx;

void recursiveTask(int id, int depth) {
    if (depth == 0) return;

    recursive_mtx.lock();
    std::cout << "Thread " << id << " performing recursive task at depth " << depth << std::endl;
    recursiveTask(id, depth - 1);
    recursive_mtx.unlock();
}

void standardTask(int id) {
    std::lock_guard<std::mutex> lock(standard_mtx);
    std::cout << "Thread " << id << " performing non-recursive task" << std::endl;
}

int main() {
    std::thread t1(recursiveTask, 1, 3);
    std::thread t2(recursiveTask, 2, 3);
    std::thread t3(standardTask, 3);

    t1.join();
    t2.join();
    t3.join();

    return 0;
}
