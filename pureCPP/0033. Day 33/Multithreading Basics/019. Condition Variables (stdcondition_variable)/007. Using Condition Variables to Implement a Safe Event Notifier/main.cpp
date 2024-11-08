#include <iostream>
#include <thread>
#include <condition_variable>
#include <mutex>
#include <vector>

std::mutex mtx;
std::condition_variable cv;
bool eventOccurred = false;
int eventCount = 0;

void eventListener(int id) {
    std::unique_lock<std::mutex> lock(mtx);
    cv.wait(lock, [] { return eventOccurred; });
    std::cout << "Listener " << id << " received event " << eventCount << std::endl;
}

void generateEvent() {
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::lock_guard<std::mutex> lock(mtx);
    eventOccurred = true;
    ++eventCount;
    std::cout << "Event " << eventCount << " generated!" << std::endl;
    cv.notify_all();
}

int main() {
    std::vector<std::thread> listeners;
    for (int i = 1; i <= 3; ++i) {
        listeners.emplace_back(eventListener, i);
    }

    generateEvent();

    for (auto& t : listeners) {
        t.join();
    }

    return 0;
}
