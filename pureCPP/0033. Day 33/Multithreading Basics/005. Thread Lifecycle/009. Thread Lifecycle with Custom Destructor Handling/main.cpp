#include <iostream>
#include <thread>

class ThreadManager {
public:
    std::thread t;

    ThreadManager() : t(&ThreadManager::task, this) {}

    ~ThreadManager() {
        if (t.joinable()) {
            t.join(); // Ensuring the thread is joined in the destructor
        }
    }

    void task() {
        std::cout << "Thread running..." << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(1));
        std::cout << "Thread completed!" << std::endl;
    }
};

int main() {
    ThreadManager manager; // Thread starts within the class
    // Thread will be joined before the manager object is destroyed
    return 0;
}
