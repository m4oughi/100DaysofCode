#include <iostream>
#include <thread>
#include <condition_variable>

std::condition_variable cv;
std::mutex mtx;
bool ready = false;

void worker() {
    std::unique_lock<std::mutex> lock(mtx);  // Locking with unique_lock
    cv.wait(lock, [] { return ready; });     // Wait until 'ready' becomes true
    std::cout << "Worker proceeding after notification.\n";
}

int main() {
    std::thread t(worker);

    std::this_thread::sleep_for(std::chrono::seconds(1));
    {
        std::lock_guard<std::mutex> lock(mtx);
        ready = true;
    }
    cv.notify_one();  // Notify worker thread

    t.join();
    return 0;
}