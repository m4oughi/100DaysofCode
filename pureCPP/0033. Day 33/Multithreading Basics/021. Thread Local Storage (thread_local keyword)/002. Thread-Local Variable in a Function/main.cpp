#include <iostream>
#include <thread>

void incrementCounter() {
    thread_local int counter = 0; // Defined inside the function
    counter++;
    std::cout << "Thread ID: " << std::this_thread::get_id() << " Counter: " << counter << std::endl;
}

int main() {
    std::thread t1(incrementCounter);
    std::thread t2(incrementCounter);
    std::thread t3(incrementCounter);

    t1.join();
    t2.join();
    t3.join();

    return 0;
}
