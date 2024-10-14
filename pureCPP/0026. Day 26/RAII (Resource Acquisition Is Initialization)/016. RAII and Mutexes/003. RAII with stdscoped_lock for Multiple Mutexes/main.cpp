#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx1, mtx2;

void task() {
    std::scoped_lock lock(mtx1, mtx2); // Locks both mtx1 and mtx2
    std::cout << "Thread " << std::this_thread::get_id() << " acquired both locks." << std::endl;
    // Both mutexes are automatically unlocked when `lock` goes out of scope
}

int main() {
    std::thread t1(task);
    std::thread t2(task);

    t1.join();
    t2.join();

    std::cout << "Multiple mutexes automatically managed with RAII." << std::endl;
    return 0;
}
