#include <iostream>
#include <thread>
#include <latch>

void worker(int id, std::latch& latch) {
    std::cout << "Worker " << id << " waiting for synchronization." << std::endl;
    latch.wait();  // Wait for all threads to be ready before proceeding
    std::cout << "Worker " << id << " started work." << std::endl;
}

int main() {
    const int num_workers = 5;
    std::latch latch(num_workers);  // Set latch to wait for all workers to be ready

    std::vector<std::thread> workers;
    for (int i = 0; i < num_workers; ++i) {
        workers.push_back(std::thread(worker, i + 1, std::ref(latch)));
    }

    std::cout << "Main thread preparing workers..." << std::endl;

    // Simulate some preparation work before starting
    std::this_thread::sleep_for(std::chrono::seconds(1));

    // Notify all workers to start by calling count_down on the latch
    latch.count_down();  // Release all waiting workers

    for (auto& t : workers) {
        t.join();  // Wait for all threads to finish
    }

    return 0;
}
