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
        std::scoped_lock lock(mtx); // Thread-safe increment
        ++count;
    }

    int getCount() {
        std::scoped_lock lock(mtx); // Thread-safe access
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
