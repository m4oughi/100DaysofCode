#include <iostream>
#include <thread>
#include <map>
#include <mutex>

std::map<std::thread::id, std::string> taskStatus;
std::mutex mtx;

void task1() {
    std::lock_guard<std::mutex> lock(mtx);
    taskStatus[std::this_thread::get_id()] = "Task 1 started";
    std::this_thread::sleep_for(std::chrono::seconds(1));
    taskStatus[std::this_thread::get_id()] = "Task 1 finished";
}

void task2() {
    std::lock_guard<std::mutex> lock(mtx);
    taskStatus[std::this_thread::get_id()] = "Task 2 started";
    std::this_thread::sleep_for(std::chrono::seconds(1));
    taskStatus[std::this_thread::get_id()] = "Task 2 finished";
}

void printStatus() {
    std::lock_guard<std::mutex> lock(mtx);
    for (const auto& pair : taskStatus) {
        std::cout << "Thread " << pair.first << ": " << pair.second << std::endl;
    }
}

int main() {
    std::thread t1(task1);
    std::thread t2(task2);

    t1.join();
    t2.join();

    printStatus();

    return 0;
}
