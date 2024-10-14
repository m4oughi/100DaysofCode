#include <iostream>
#include <thread>
#include <mutex>

std::recursive_mutex rmtx;

void recursiveFunction(int count) {
    if (count > 0) {
        std::lock_guard<std::recursive_mutex> lock(rmtx); // Locks the recursive mutex
        std::cout << "Thread " << std::this_thread::get_id() << " acquired recursive lock, count: " << count << std::endl;
        recursiveFunction(count - 1);
    }
    // Mutex is automatically unlocked when the lock goes out of scope
}

int main() {
    std::thread t1(recursiveFunction, 3);
    std::thread t2(recursiveFunction, 3);

    t1.join();
    t2.join();

    std::cout << "Recursive mutex automatically managed using RAII." << std::endl;
    return 0;
}
