#include <iostream>
#include <thread>
#include <vector>
#include <barrier>

void task(int id, std::barrier<>& sync) {
    std::cout << "Task " << id << " started." << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(1));  // Simulate work
    sync.arrive_and_wait();  // Synchronize at barrier
    std::cout << "Task " << id << " completed." << std::endl;
}

int main() {
    const int num_workers = 5;
    std::barrier<> sync(num_workers);  // Barrier for 5 workers

    std::vector<std::thread> workers;
    for (int i = 0; i < num_workers; ++i) {
        workers.push_back(std::thread(task, i + 1, std::ref(sync)));
    }

    sync.arrive_and_wait();  // Main thread waits at the barrier
    std::cout << "Main thread has passed the barrier." << std::endl;

    for (auto& t : workers) {
        t.join();  // Wait for all threads to finish
    }

    return 0;
}
