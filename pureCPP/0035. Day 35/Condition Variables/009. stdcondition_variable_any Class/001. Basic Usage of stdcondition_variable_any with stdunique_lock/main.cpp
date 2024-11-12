#include <iostream>
#include <thread>
#include <condition_variable>
#include <mutex>

std::condition_variable_any cv_any;
std::mutex mtx;
bool ready = false;

void worker() {
    std::unique_lock<std::mutex> lock(mtx);
    cv_any.wait(lock, [] { return ready; });  // Wait until 'ready' is true
    std::cout << "Worker proceeding after predicate check.\n";
}

int main() {
    std::thread t(worker);

    std::this_thread::sleep_for(std::chrono::seconds(1));
    {
        std::lock_guard<std::mutex> lock(mtx);
        ready = true;
    }
    cv_any.notify_one();  // Notify worker

    t.join();
    return 0;
}
