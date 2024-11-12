#include <iostream>
#include <thread>
#include <condition_variable>
#include <vector>

std::condition_variable cv;
std::mutex mtx;
bool stage1Done = false;
bool stage2Done = false;

void task1() {
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << "Task 1 completed.\n";
    {
        std::lock_guard<std::mutex> lock(mtx);
        stage1Done = true;
    }
    cv.notify_one(); // Notify task2 to proceed
}

void task2() {
    std::unique_lock<std::mutex> lock(mtx);
    cv.wait(lock, [] { return stage1Done; });
    std::cout << "Task 2 proceeding after Task 1.\n";
    std::this_thread::sleep_for(std::chrono::seconds(1));
    {
        std::lock_guard<std::mutex> lock(mtx);
        stage2Done = true;
    }
    cv.notify_one(); // Notify task3 to proceed
}

void task3() {
    std::unique_lock<std::mutex> lock(mtx);
    cv.wait(lock, [] { return stage2Done; });
    std::cout << "Task 3 proceeding after Task 2.\n";
}

int main() {
    std::thread t1(task1);
    std::thread t2(task2);
    std::thread t3(task3);

    t1.join();
    t2.join();
    t3.join();
    return 0;
}
