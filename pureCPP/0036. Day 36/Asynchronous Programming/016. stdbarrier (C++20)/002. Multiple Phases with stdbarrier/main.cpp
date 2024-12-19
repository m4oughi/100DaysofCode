#include <iostream>
#include <thread>
#include <vector>
#include <barrier>

void phase1_worker(int id, std::barrier<>& sync) {
    std::cout << "Phase 1 Worker " << id << " started." << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(1));  // Simulate work
    sync.arrive_and_wait();  // Wait for all workers to reach the first barrier
    std::cout << "Phase 1 Worker " << id << " finished." << std::endl;
}

void phase2_worker(int id, std::barrier<>& sync) {
    sync.arrive_and_wait();  // Wait for phase 1 to finish
    std::cout << "Phase 2 Worker " << id << " started." << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(1));  // Simulate work
    sync.arrive_and_wait();  // Wait for all workers to finish phase 2
    std::cout << "Phase 2 Worker " << id << " finished." << std::endl;
}

int main() {
    const int num_workers = 3;
    std::barrier<> sync(num_workers);  // Barrier for 3 workers, reusable for multiple phases

    std::vector<std::thread> workers;

    // Phase 1
    for (int i = 0; i < num_workers; ++i) {
        workers.push_back(std::thread(phase1_worker, i + 1, std::ref(sync)));
    }

    // Phase 2
    for (int i = 0; i < num_workers; ++i) {
        workers.push_back(std::thread(phase2_worker, i + 1, std::ref(sync)));
    }

    // Wait for phase 1 to complete
    std::cout << "Main thread waiting for phase 1 to complete." << std::endl;
    sync.arrive_and_wait();  // Main thread waits for phase 1 completion
    std::cout << "Phase 1 completed. Proceeding to phase 2." << std::endl;

    // Wait for phase 2 to complete
    sync.arrive_and_wait();  // Main thread waits for phase 2 completion
    std::cout << "Phase 2 completed. Program ending." << std::endl;

    for (auto& t : workers) {
        t.join();  // Wait for all threads to finish
    }

    return 0;
}
