#include <iostream>
#include <thread>
#include <condition_variable>
#include <vector>

std::condition_variable cv;
std::mutex mtx;
bool ready = false;

void worker(int id) {
    std::unique_lock<std::mutex> lock(mtx);
    cv.wait(lock, [] { return ready; });
    std::cout << "Worker " << id << " proceeding.\n";
}

int main() {
    std::vector<std::thread> workers;
    for (int i = 1; i <= 5; ++i) {
        workers.emplace_back(worker, i);
    }

    std::this_thread::sleep_for(std::chrono::seconds(1));
    {
        std::lock_guard<std::mutex> lock(mtx);
        ready = true;
    }
    cv.notify_all(); // Notify all threads

    for (auto& t : workers) {
        t.join();
    }
    return 0;
}
