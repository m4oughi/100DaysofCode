#include <iostream>
#include <thread>

void printThreadId() {
    std::cout << "Thread ID: " << std::this_thread::get_id() << std::endl;
}

int main() {
    std::thread t1(printThreadId);
    std::thread t2(printThreadId);

    t1.join();
    t2.join();

    return 0;
}
