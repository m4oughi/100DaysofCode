#include <iostream>
#include <deque>

int main() {
    std::deque<std::string> tasks = {"Task1", "Task2"};

    std::cout << "Initial tasks: ";
    for (const auto& task : tasks) std::cout << task << " ";
    std::cout << "\n";

    for (int i = 1; i <= 3; i++) {
        tasks.assign(3, "NewTask" + std::to_string(i));  // Assign new batch
        std::cout << "Iteration " << i << " tasks: ";
        for (const auto& task : tasks) std::cout << task << " ";
        std::cout << "\n";
    }

    return 0;
}
