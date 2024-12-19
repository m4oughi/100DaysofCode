#include <iostream>
#include <thread>
#include <latch>

void task(int id, std::latch& latch) {
    std::cout << "Task " << id << " started." << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(1));  // Simulate work
    std::cout << "Task " << id << " finished." << std::endl;
    latch.count_down();  // Decrement latch count when done
}

int main() {
    const int num_tasks = 4;
    std::latch latch(num_tasks);  // Set latch to wait for 4 tasks

    std::vector<std::thread> threads;
    for (int i = 0; i < num_tasks; ++i) {
        threads.push_back(std::thread(task, i + 1, std::ref(latch)));
    }

    latch.wait();  // Main thread waits for all tasks to finish
    std::cout << "All tasks completed. Program ending." << std::endl;

    for (auto& t : threads) {
        t.join();  // Wait for all threads to complete
    }

    return 0;
}
