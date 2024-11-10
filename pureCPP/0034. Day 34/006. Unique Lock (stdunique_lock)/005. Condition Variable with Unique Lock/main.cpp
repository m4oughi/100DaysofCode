#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>
#include <queue>

std::mutex mtx;
std::condition_variable cv;
std::queue<int> dataQueue;
bool done = false;

void producer() {
    for (int i = 1; i <= 5; ++i) {
        std::unique_lock<std::mutex> lock(mtx);
        dataQueue.push(i);
        std::cout << "Produced: " << i << "\n";
        cv.notify_one(); // Notify a waiting consumer
    }
    std::unique_lock<std::mutex> lock(mtx);
    done = true;
    cv.notify_all(); // Notify all waiting threads
}

void consumer(int id) {
    while (true) {
        std::unique_lock<std::mutex> lock(mtx);
        cv.wait(lock, [] { return !dataQueue.empty() || done; });

        if (!dataQueue.empty()) {
            int value = dataQueue.front();
            dataQueue.pop();
            std::cout << "Consumer " << id << " processed: " << value << "\n";
        } else if (done) {
            break;
        }
    }
}

int main() {
    std::thread prod(producer);
    std::thread cons1(consumer, 1);
    std::thread cons2(consumer, 2);

    prod.join();
    cons1.join();
    cons2.join();
    return 0;
}
