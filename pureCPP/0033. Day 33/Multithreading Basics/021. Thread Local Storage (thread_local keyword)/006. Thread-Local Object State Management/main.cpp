#include <iostream>
#include <thread>

class Counter {
public:
    Counter() : count(0) {}
    void increment() { ++count; }
    int getCount() const { return count; }

private:
    int count;
};

thread_local Counter counter;  // Each thread gets its own Counter instance

void incrementCounter() {
    counter.increment();
    std::cout << "Thread " << std::this_thread::get_id() << " Counter: " << counter.getCount() << std::endl;
}

int main() {
    std::thread t1(incrementCounter);
    std::thread t2(incrementCounter);

    t1.join();
    t2.join();

    return 0;
}
