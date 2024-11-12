#include <iostream>
#include <thread>
#include <condition_variable>
#include <vector>

std::condition_variable cv;
std::mutex mtx;
int count = 0;
const int threshold = 3;

void worker(int id) {
    std::unique_lock<std::mutex> lock(mtx);
    ++count;
    std::cout << "Worker " << id << " reached barrier.\n";

    if (count < threshold) {
        cv.wait(lock, [] { return count == threshold; });  // Wait until threshold is reached
    } else {
        cv.notify_all();  // Notify all threads once threshold is reached
    }

    std::cout << "Worker " << id << " proceeding past barrier.\n";
}

int main() {
    std::vector<std::thread> threads;
    for (int i = 1; i <= threshold; ++i) {
        threads.emplace_back(worker, i);
    }

    for (auto& t : threads) {
        t.join();
    }
    return 0;
}
