#include <iostream>
#include <thread>
#include <condition_variable>

std::condition_variable cv;
std::mutex mtx;
int count = 0;
const int targetCount = 5;

void counter() {
    for (int i = 0; i < targetCount; ++i) {
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
        std::lock_guard<std::mutex> lock(mtx);
        count++;
        std::cout << "Count incremented to: " << count << "\n";
        if (count == targetCount) {
            cv.notify_all();  // Notify all waiting threads when target count is reached
        }
    }
}

void waiter(int id) {
    std::unique_lock<std::mutex> lock(mtx);
    cv.wait(lock, [] { return count == targetCount; });  // Predicate protects against spurious wakeups
    std::cout << "Waiter " << id << " proceeding after countdown.\n";
}

int main() {
    std::thread countThread(counter);
    std::thread waiter1(waiter, 1);
    std::thread waiter2(waiter, 2);

    countThread.join();
    waiter1.join();
    waiter2.join();
    return 0;
}
