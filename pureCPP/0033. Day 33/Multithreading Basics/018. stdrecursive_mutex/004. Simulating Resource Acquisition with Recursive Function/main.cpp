#include <iostream>
#include <thread>
#include <mutex>

std::recursive_mutex r_mtx;

void resourceHandler(int id, int steps) {
    if (steps <= 0) return;
    
    r_mtx.lock();
    std::cout << "Thread " << id << " handling resource at step " << steps << std::endl;

    resourceHandler(id, steps - 1);  // Recursive call with lock still held

    std::cout << "Thread " << id << " releasing resource at step " << steps << std::endl;
    r_mtx.unlock();
}

int main() {
    std::thread t1(resourceHandler, 1, 3);
    std::thread t2(resourceHandler, 2, 3);

    t1.join();
    t2.join();

    return 0;
}
