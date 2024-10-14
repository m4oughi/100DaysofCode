#include <iostream>
#include <thread>

class ThreadRAII {
    std::thread t;

public:
    ThreadRAII(std::thread&& thread) : t(std::move(thread)) {}

    ~ThreadRAII() {
        if (t.joinable()) {
            t.join();
            std::cout << "Thread joined automatically." << std::endl;
        }
    }
};

void threadFunction() {
    std::cout << "Thread is running." << std::endl;
}

int main() {
    {
        ThreadRAII threadRAII(std::thread(threadFunction));
        // No need to explicitly call join, RAII ensures it.
    }  // Thread is automatically joined when `ThreadRAII` goes out of scope.
}
