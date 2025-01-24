#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

int main() {
    std::vector<std::string> tasks{"Task A", "Task B", "Task C"};

    do {
        for (const auto &task : tasks) std::cout << task << " ";
        std::cout << "\n";
    } while (std::prev_permutation(tasks.begin(), tasks.end()));

    // Output:
    // Task A Task B Task C
    // Task A Task C Task B
    // Task B Task A Task C
    // ...
}
