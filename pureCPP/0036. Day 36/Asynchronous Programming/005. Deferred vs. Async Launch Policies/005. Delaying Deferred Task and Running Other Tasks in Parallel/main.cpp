#include <iostream>
#include <future>
#include <thread>

void taskA() {
    std::cout << "Task A started.\n";
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << "Task A completed.\n";
}

void taskB() {
    std::cout << "Task B started.\n";
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << "Task B completed.\n";
}

int main() {
    std::future<void> asyncTaskA = std::async(std::launch::async, taskA);
    std::future<void> asyncTaskB = std::async(std::launch::async, taskB);

    // Deferred task will only execute when get() is called
    std::future<void> deferredTask = std::async(std::launch::deferred, taskA);

    std::cout << "Async tasks running in parallel...\n";

    asyncTaskA.get();  // Wait for async Task A to finish
    asyncTaskB.get();  // Wait for async Task B to finish

    // Now the deferred task will run
    deferredTask.get();  // Deferred task runs here

    return 0;
}
