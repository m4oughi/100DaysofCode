#include <iostream>
#include <thread>
#include <vector>
#include <barrier>

void worker(int id, std::barrier<>& sync) {
    std::cout << "Worker " << id << " is working." << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(1));  // Simulate work
    sync.arrive_and_wait();  // Synchronize with other threads
    std::cout << "Worker " << id << " has reached the barrier and continues." << std::endl;
}

int main() {
    const int num_workers = 3;
    std::barrier<> sync(num_workers);  // Barrier for 3 workers

    std::vector<std::thread> workers;
    for (int i = 0; i < num_workers; ++i) {
        workers.push_back(std::thread(worker, i + 1, std::ref(sync)));
    }

    // Wait for all workers to reach the barrier
    std::cout << "Main thread waiting for workers at the barrier." << std::endl;
    sync.arrive_and_wait();  // Main thread also waits
    std::cout << "All threads have passed the barrier. Main thread proceeding." << std::endl;

    for (auto& t : workers) {
        t.join();  // Wait for all threads to finish
    }

    return 0;
}
