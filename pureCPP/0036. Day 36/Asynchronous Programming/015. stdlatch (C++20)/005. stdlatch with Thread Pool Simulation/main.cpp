#include <iostream>
#include <thread>
#include <vector>
#include <latch>

void do_work(int id, std::latch& latch) {
    std::cout << "Worker " << id << " is working." << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(1));  // Simulate work
    latch.count_down();  // Worker signals that it has completed
}

int main() {
    const int num_workers = 5;
    std::latch latch(num_workers);  // Latch to synchronize workers

    std::vector<std::thread> workers;

    // Create thread pool and execute tasks
    for (int i = 0; i < num_workers; ++i) {
        workers.push_back(std::thread(do_work, i + 1, std::ref(latch)));
    }

    std::cout << "Main thread waiting for all workers to finish..." << std::endl;

    latch.wait();  // Main thread waits for all workers to finish

    std::cout << "All workers finished. Main thread proceeding." << std::endl;

    for (auto& t : workers) {
        t.join();  // Wait for all threads to finish
    }

    return 0;
}
