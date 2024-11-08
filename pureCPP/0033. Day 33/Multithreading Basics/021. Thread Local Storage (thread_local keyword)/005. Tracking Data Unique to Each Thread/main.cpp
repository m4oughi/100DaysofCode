#include <iostream>
#include <thread>
#include <string>

thread_local std::string threadTask;

void performTask(const std::string& task) {
    threadTask = task;
    std::cout << "Thread " << std::this_thread::get_id() << " performing task: " << threadTask << std::endl;
}

int main() {
    std::thread t1(performTask, "Task A");
    std::thread t2(performTask, "Task B");
    std::thread t3(performTask, "Task C");

    t1.join();
    t2.join();
    t3.join();

    return 0;
}
