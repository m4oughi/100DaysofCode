#include <iostream>
#include <queue>

int main() {
    std::queue<std::string> highPriority, lowPriority;

    highPriority.push("Urgent Bug Fix");
    highPriority.push("System Crash Recovery");

    lowPriority.push("UI Enhancement");
    lowPriority.push("Code Refactoring");

    std::cout << "Processing High Priority Tasks:" << std::endl;
    while (!highPriority.empty()) {
        std::cout << "- " << highPriority.front() << std::endl;
        highPriority.pop();
    }

    std::cout << "Processing Low Priority Tasks:" << std::endl;
    while (!lowPriority.empty()) {
        std::cout << "- " << lowPriority.front() << std::endl;
        lowPriority.pop();
    }

    return 0;
}
