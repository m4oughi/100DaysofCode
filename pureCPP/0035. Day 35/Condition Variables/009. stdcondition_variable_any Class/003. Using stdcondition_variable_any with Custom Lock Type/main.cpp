#include <iostream>
#include <thread>
#include <condition_variable>
#include <mutex>

std::condition_variable_any cv_any;
std::mutex mtx;
bool ready = false;

class CustomLock {
public:
    CustomLock(std::mutex& m) : lock_(m) {}
    void lock() { lock_.lock(); }
    void unlock() { lock_.unlock(); }
    bool owns_lock() const { return true; }

private:
    std::unique_lock<std::mutex> lock_;
};

void worker() {
    CustomLock lock(mtx);
    cv_any.wait(lock, [] { return ready; });  // Wait until 'ready' is true
    std::cout << "Worker proceeding with custom lock.\n";
}

int main() {
    std::thread t(worker);

    std::this_thread::sleep_for(std::chrono::seconds(1));
    {
        std::lock_guard<std::mutex> lock(mtx);
        ready = true;
    }
    cv_any.notify_one();

    t.join();
    return 0;
}
