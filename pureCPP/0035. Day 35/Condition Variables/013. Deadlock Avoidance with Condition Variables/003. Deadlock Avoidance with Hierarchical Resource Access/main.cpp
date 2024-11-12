#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>

std::condition_variable cv;
std::mutex mtx_resourceA, mtx_resourceB;
bool resourceA_available = false, resourceB_available = false;

void task1() {
    std::unique_lock<std::mutex> lockA(mtx_resourceA);  // Lock resource A
    cv.wait(lockA, [] { return resourceA_available; });
    std::cout << "Task 1 acquired resource A.\n";

    std::unique_lock<std::mutex> lockB(mtx_resourceB);  // Lock resource B
    cv.wait(lockB, [] { return resourceB_available; });
    std::cout << "Task 1 acquired resource B.\n";

    // Simulate work
    std::cout << "Task 1 working with both resources.\n";
}

void task2() {
    std::unique_lock<std::mutex> lockB(mtx_resourceB);  // Lock resource B first
    cv.wait(lockB, [] { return resourceB_available; });
    std::cout << "Task 2 acquired resource B.\n";

    std::unique_lock<std::mutex> lockA(mtx_resourceA);  // Lock resource A
    cv.wait(lockA, [] { return resourceA_available; });
    std::cout << "Task 2 acquired resource A.\n";

    // Simulate work
    std::cout << "Task 2 working with both resources.\n";
}

void releaseResources() {
    std::lock_guard<std::mutex> lockA(mtx_resourceA);
    resourceA_available = true;
    cv.notify_all();

    std::lock_guard<std::mutex> lockB(mtx_resourceB);
    resourceB_available = true;
    cv.notify_all();
}

int main() {
    std::thread t1(task1);
    std::thread t2(task2);

    std::this_thread::sleep_for(std::chrono::seconds(1));  // Simulate some delay before resources are available
    releaseResources();

    t1.join();
    t2.join();
    return 0;
}
