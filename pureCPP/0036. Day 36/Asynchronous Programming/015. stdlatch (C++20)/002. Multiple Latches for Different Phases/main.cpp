#include <iostream>
#include <thread>
#include <latch>
#include <vector>

void phase1_worker(int id, std::latch& phase1_latch) {
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << "Phase 1 Worker " << id << " completed." << std::endl;
    phase1_latch.count_down();
}

void phase2_worker(int id, std::latch& phase2_latch) {
    phase2_latch.wait();  // Wait for phase 1 to finish
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << "Phase 2 Worker " << id << " completed." << std::endl;
}

int main() {
    const int num_workers = 3;
    
    std::latch phase1_latch(num_workers);
    std::latch phase2_latch(num_workers);

    std::vector<std::thread> workers;
    
    // Phase 1
    for (int i = 0; i < num_workers; ++i) {
        workers.push_back(std::thread(phase1_worker, i + 1, std::ref(phase1_latch)));
    }

    // Phase 2
    for (int i = 0; i < num_workers; ++i) {
        workers.push_back(std::thread(phase2_worker, i + 1, std::ref(phase2_latch)));
    }

    phase1_latch.wait();  // Wait for phase 1 to complete
    std::cout << "Phase 1 completed. Proceeding to Phase 2." << std::endl;

    phase2_latch.wait();  // Wait for phase 2 to complete
    std::cout << "Phase 2 completed. Main thread proceeding." << std::endl;

    for (auto& t : workers) {
        t.join();
    }

    return 0;
}
