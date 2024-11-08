#include <iostream>
#include <thread>
#include <chrono>

void threadFunc(int duration) {
    std::cout << "Thread sleeping for " << duration << " seconds..." << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(duration));
    std::cout << "Thread awake after " << duration << " seconds." << std::endl;
}

int main() {
    std::thread t1(threadFunc, 1);
    std::thread t2(threadFunc, 3);
    std::thread t3(threadFunc, 5);

    t1.join();
    t2.join();
    t3.join();

    return 0;
}
