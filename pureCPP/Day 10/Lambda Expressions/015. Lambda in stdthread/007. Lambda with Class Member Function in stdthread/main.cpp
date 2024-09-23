#include <iostream>
#include <thread>

class Counter {
public:
    void countTo(int n) {
        for (int i = 1; i <= n; ++i) {
            std::cout << i << std::endl;
        }
    }
};

int main() {
    Counter counter;
    std::thread t([&counter]() {
        counter.countTo(5);
    });

    t.join(); // Waits for the thread to finish
    return 0;
}
