#include <iostream>
#include <thread>
#include <condition_variable>

std::condition_variable cv;
std::mutex mtx;
bool initialized = false;

void initialize_once() {
    std::unique_lock<std::mutex> lock(mtx);
    if (!initialized) {
        std::this_thread::sleep_for(std::chrono::seconds(1));  // Simulate initialization
        initialized = true;
        std::cout << "Initialization done.\n";
        cv.notify_all();  // Notify all threads waiting for initialization
    }
}

void worker(int id) {
    std::unique_lock<std::mutex> lock(mtx);
    cv.wait(lock, [] { return initialized; });  // Wait until initialization is complete
    std::cout << "Worker " << id << " proceeding after initialization.\n";
}

int main() {
    std::thread initThread(initialize_once);
    std::thread t1(worker, 1);
    std::thread t2(worker, 2);

    initThread.join();
    t1.join();
    t2.join();
    return 0;
}
