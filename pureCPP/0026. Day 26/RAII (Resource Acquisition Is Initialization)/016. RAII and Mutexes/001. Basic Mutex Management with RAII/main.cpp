#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx;

void sharedFunction() {
    std::lock_guard<std::mutex> lock(mtx); // Locks the mutex
    std::cout << "Thread " << std::this_thread::get_id() << " is running." << std::endl;
    // Mutex is automatically released when lock goes out of scope
}

int main() {
    std::thread t1(sharedFunction);
    std::thread t2(sharedFunction);

    t1.join();
    t2.join();
    
    std::cout << "Mutex automatically managed using RAII." << std::endl;
    return 0;
}
