#include <iostream>
#include <thread>

thread_local int counter = 0;

void incrementCounter() {
    counter++;
    std::cout << "Thread ID: " << std::this_thread::get_id() << " Counter: " << counter << std::endl;
}

int main() {
    std::thread t1(incrementCounter);
    std::thread t2(incrementCounter);

    t1.join();
    t2.join();

    return 0;
}
