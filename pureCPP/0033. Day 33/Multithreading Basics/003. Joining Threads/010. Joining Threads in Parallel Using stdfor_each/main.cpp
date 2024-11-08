#include <iostream>
#include <thread>
#include <vector>
#include <algorithm>

void task(int id) {
    std::cout << "Task " << id << " running!" << std::endl;
}

int main() {
    std::vector<std::thread> threads;

    for (int i = 0; i < 5; ++i) {
        threads.emplace_back(task, i); // Create threads
    }

    // Join threads using std::for_each
    std::for_each(threads.begin(), threads.end(), [](std::thread &t) {
        t.join();
    });

    return 0;
}
