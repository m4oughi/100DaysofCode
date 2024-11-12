#include <iostream>
#include <thread>
#include <condition_variable>
#include <queue>

template<typename T>
class ThreadSafeQueue {
private:
    std::queue<T> queue;
    std::mutex mtx;
    std::condition_variable cv;

public:
    void push(T value) {
        std::lock_guard<std::mutex> lock(mtx);
        queue.push(value);
        cv.notify_one();
    }

    T pop() {
        std::unique_lock<std::mutex> lock(mtx);
        cv.wait(lock, [this] { return !queue.empty(); });  // Wait for an item to be available
        T value = queue.front();
        queue.pop();
        return value;
    }
};

void producer(ThreadSafeQueue<int>& tsq) {
    for (int i = 1; i <= 5; ++i) {
        tsq.push(i);
        std::cout << "Produced: " << i << "\n";
    }
}

void consumer(ThreadSafeQueue<int>& tsq) {
    for (int i = 1; i <= 5; ++i) {
        int item = tsq.pop();
        std::cout << "Consumed: " << item << "\n";
    }
}

int main() {
    ThreadSafeQueue<int> tsq;
    std::thread prod(producer, std::ref(tsq));
    std::thread cons(consumer, std::ref(tsq));

    prod.join();
    cons.join();
    return 0;
}
