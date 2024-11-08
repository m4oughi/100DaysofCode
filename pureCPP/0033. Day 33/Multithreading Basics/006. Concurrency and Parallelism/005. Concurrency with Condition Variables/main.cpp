#include <iostream>
#include <thread>
#include <condition_variable>

std::condition_variable cv;
std::mutex mtx;
bool ready = false;

void task1() {
    std::unique_lock<std::mutex> lock(mtx);
    std::cout << "Task 1 waiting..." << std::endl;
    cv.wait(lock, [] { return ready; }); // Wait for the condition
    std::cout << "Task 1 running!" << std::endl;
}

void task2() {
    std::this_thread::sleep_for(std::chrono::seconds(1));
    {
        std::lock_guard<std::mutex> lock(mtx);
        ready = true;
        std::cout << "Task 2 signals Task 1!" << std::endl;
    }
    cv.notify_one(); // Notify Task 1 to proceed
}

int main() {
    std::thread t1(task1);
    std::thread t2(task2);

    t1.join();
    t2.join();

    return 0;
}
