#include <iostream>
#include <thread>
#include <mutex>

class Counter {
private:
    int count;
    std::mutex mtx;

public:
    Counter() : count(0) {}

    void increment() {
        std::lock_guard<std::mutex> lock(mtx);
        ++count;
    }

    int getCount() {
        std::lock_guard<std::mutex> lock(mtx);
        return count;
    }
};

int main() {
    Counter counter;

    std::thread t1([&counter]() { counter.increment(); });
    std::thread t2([&counter]() { counter.increment(); });

    t1.join();
    t2.join();

    std::cout << "Final Count: " << counter.getCount() << "\n";
    return 0;
}
