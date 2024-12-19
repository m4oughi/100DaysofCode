#include <iostream>
#include <future>
#include <thread>
#include <vector>

int processData(const std::vector<int>& data) {
    int sum = 0;
    for (int num : data) {
        sum += num;
    }
    return sum;
}

int main() {
    std::vector<int> data(1000000, 1);  // Large vector of 1's
    std::packaged_task<int(const std::vector<int>&)> task(processData);
    std::future<int> result = task.get_future();

    std::thread t(std::move(task), std::ref(data));  // Start task in separate thread

    std::cout << "Total sum of data: " << result.get() << std::endl;

    t.join();  // Wait for the thread to finish
    return 0;
}
