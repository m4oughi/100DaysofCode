#include <iostream>
#include <thread>

thread_local int threadID = -1;

void initializeAndPrintID() {
    if (threadID == -1) {
        threadID = static_cast<int>(std::hash<std::thread::id>{}(std::this_thread::get_id()) % 100);
    }
    std::cout << "Thread ID for thread " << std::this_thread::get_id() << " is " << threadID << std::endl;
}

int main() {
    std::thread t1(initializeAndPrintID);
    std::thread t2(initializeAndPrintID);
    std::thread t3(initializeAndPrintID);

    t1.join();
    t2.join();
    t3.join();

    return 0;
}
