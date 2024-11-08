#include <iostream>
#include <thread>

void increment(int& counter) {
    for (int i = 0; i < 1000; ++i) {
        ++counter;
    }
}

int main() {
    int counter = 0;

    std::thread t1(increment, std::ref(counter)); // Pass reference to thread
    t1.join(); // Join the thread

    std::cout << "Counter: " << counter << std::endl;
    return 0;
}
