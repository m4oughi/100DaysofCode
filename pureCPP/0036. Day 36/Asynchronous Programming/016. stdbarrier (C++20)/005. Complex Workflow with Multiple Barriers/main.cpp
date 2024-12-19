#include <iostream>
#include <thread>
#include <vector>
#include <barrier>

void stage1_task(int id, std::barrier<>& sync) {
    std::cout << "Stage 1 Task " << id << " working." << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(1));  // Simulate work
    sync.arrive_and_wait();  // Synchronize with other tasks
    std::cout << "Stage 1 Task " << id << " finished." << std::endl;
}

void stage2_task(int id, std::barrier<>& sync) {
    sync.arrive_and_wait();  // Wait for stage 1 completion
    std::cout << "Stage 2 Task " << id << " working." << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(1));  // Simulate work
    sync.arrive_and_wait();  // Synchronize with other tasks
    std::cout << "Stage 2 Task " << id << " finished." << std::endl;
}

int main() {
    const int num_workers = 3;
    std::barrier<> stage1_sync(num_workers);  // Barrier for stage 1
    std::barrier<> stage2_sync(num_workers);  // Barrier for stage 2

    std::vector<std::thread> workers;
    
    // Stage 1 tasks
    for (int i = 0; i < num_workers; ++i) {
        workers.push_back(std::thread(stage1_task, i + 1, std::ref(stage1_sync)));
    }
    
    // Stage 2 tasks
    for (int i = 0; i < num_workers; ++i) {
        workers.push_back(std::thread(stage2_task, i + 1, std::ref(stage2_sync)));
    }

    stage1_sync.arrive_and_wait();  // Main thread waits for stage 1
    std::cout << "Stage 1 completed, proceeding to stage 2." << std::endl;

    stage2_sync.arrive_and_wait();  // Main thread waits for stage 2
    std::cout << "Stage 2 completed, program ending." << std::endl;

    for (auto& t : workers) {
        t.join();  // Wait for all threads to finish
    }

    return 0;
}
