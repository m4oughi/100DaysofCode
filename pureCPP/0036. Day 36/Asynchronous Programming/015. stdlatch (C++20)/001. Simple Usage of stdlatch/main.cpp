#include <iostream>
#include <thread>
#include <latch>
#include <vector>

void worker(int id, std::latch& latch) {
    std::this_thread::sleep_for(std::chrono::seconds(1));  // Simulate work
    std::cout << "Worker " << id << " completed work." << std::endl;
    latch.count_down();  // Decrement the latch count
}

int main() {
    const int num_workers = 3;
    std::latch latch(num_workers);  // Set the latch to wait for 3 threads

    std::vector<std::thread> workers;
    for (int i = 0; i < num_workers; ++i) {
        workers.push_back(std::thread(worker, i + 1, std::ref(latch)));
    }

    latch.wait();  // Wait until all workers finish
    std::cout << "All workers have completed. Main thread proceeding." << std::endl;

    for (auto& t : workers) {
        t.join();  // Wait for all threads to finish
    }

    return 0;
}
