#include <iostream>
#include <thread>
#include <chrono>

class ScopedThread {
    std::thread t;
public:
    explicit ScopedThread(std::thread t_) : t(std::move(t_)) {
        if (!t.joinable()) throw std::logic_error("No thread");
    }
    ~ScopedThread() {
        t.join();  // Ensure thread is joined upon destruction
    }
};

void scopedTask() {
    std::cout << "Scoped thread is working..." << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << "Scoped thread has completed." << std::endl;
}

int main() {
    ScopedThread st(std::thread(scopedTask));  // Scoped thread will auto-join

    std::cout << "Main thread completes while scoped thread auto-joins." << std::endl;
    return 0;
}
