#include <iostream>
#include <thread>
#include <vector>
#include <barrier>

void work(int id, std::barrier<>& sync) {
    std::cout << "Worker " << id << " working." << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(1));  // Simulate work
    sync.arrive_and_wait();  // Synchronize all workers
    std::cout << "Worker " << id << " completed work." << std::endl;
}

void barrier_completion() {
    std::cout << "All workers have arrived at the barrier. Proceeding to next phase." << std::endl;
}

int main() {
    const int num_workers = 4;
    std::barrier<> sync(num_workers, barrier_completion);  // Custom function on barrier completion

    std::vector<std::thread> workers;
    for (int i = 0; i < num_workers; ++i) {
        workers.push_back(std::thread(work, i + 1, std::ref(sync)));
    }

    sync.arrive_and_wait();  // Main thread waits at the barrier
    std::cout << "Main thread has passed the barrier." << std::endl;

    for (auto& t : workers) {
        t.join();  // Wait for all threads to finish
    }

    return 0;
}
