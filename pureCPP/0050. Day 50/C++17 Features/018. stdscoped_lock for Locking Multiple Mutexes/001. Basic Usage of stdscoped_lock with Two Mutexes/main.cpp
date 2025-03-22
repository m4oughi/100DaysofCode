#include <iostream>
#include <mutex>
#include <thread>

std::mutex mtx1, mtx2;

void threadFunc() {
    std::scoped_lock lock(mtx1, mtx2);
    std::cout << "Thread acquired both mutexes safely\n";
}

int main() {
    std::thread t1(threadFunc);
    std::thread t2(threadFunc);
    
    t1.join();
    t2.join();
    
    return 0;
}
