#include <iostream>
#include <thread>
#include <atomic>
#include <utility>

std::atomic<int> counter = 0;

void worker() {
    int prev_count = std::exchange(counter, counter + 1);
    std::cout << "Thread updated counter from " << prev_count << " to " << counter << "\n";
}

int main() {
    std::thread t1(worker);
    std::thread t2(worker);

    t1.join();
    t2.join();

    return 0;
}
