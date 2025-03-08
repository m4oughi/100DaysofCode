#include <iostream>
#include <deque>

void printQueue(const std::deque<std::string>& dq) {
    for (const auto& task : dq) std::cout << task << " ";
    std::cout << "\n";
}

int main() {
    std::deque<std::string> tasks = {"Task1", "Task2", "Task3", "Task4"};

    std::cout << "Initial task queue: ";
    printQueue(tasks);

    // Reducing to 2 tasks
    tasks.resize(2);
    std::cout << "After resizing to 2 tasks: ";
    printQueue(tasks);

    // Expanding again, adding "NewTask" for empty spots
    tasks.resize(5, "NewTask");
    std::cout << "After expanding to 5 tasks: ";
    printQueue(tasks);

    return 0;
}
