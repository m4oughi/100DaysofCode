#include <iostream>
#include <thread>
#include <condition_variable>
#include <vector>

std::condition_variable cv;
std::mutex mtx;
bool ready = false;

void consumer(int id) {
    std::unique_lock<std::mutex> lock(mtx);
    cv.wait(lock, [] { return ready; }); // Wait until ready is true
    std::cout << "Consumer " << id << " proceeding.\n";
}

int main() {
    std::vector<std::thread> consumers;
    for (int i = 1; i <= 5; ++i) {
        consumers.emplace_back(consumer, i);
    }

    std::this_thread::sleep_for(std::chrono::seconds(1));
    {
        std::lock_guard<std::mutex> lock(mtx);
        ready = true;
    }
    cv.notify_all(); // Notify all waiting consumers

    for (auto& t : consumers) {
        t.join();
    }
    return 0;
}
