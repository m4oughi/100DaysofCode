#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

int main() {
    std::vector<std::string> tasks{"Task 1", "Task 2", "Task 3"};

    std::for_each(tasks.begin(), tasks.end(), [](const std::string &task) {
        std::cout << "Performing: " << task << "\n";
    });

    // Output:
    // Performing: Task 1
    // Performing: Task 2
    // Performing: Task 3
}
