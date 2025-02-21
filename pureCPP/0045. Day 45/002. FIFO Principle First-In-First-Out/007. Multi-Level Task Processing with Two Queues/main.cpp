#include <iostream>
#include <queue>

int main() {
    std::queue<std::string> highPriority, lowPriority;

    highPriority.push("Fix Critical Bug");
    highPriority.push("Recover System");

    lowPriority.push("Code Cleanup");
    lowPriority.push("Optimize Performance");

    std::cout << "Processing High Priority Tasks:\n";
    while (!highPriority.empty()) {
        std::cout << "- " << highPriority.front() << std::endl;
        highPriority.pop();
    }

    std::cout << "Processing Low Priority Tasks:\n";
    while (!lowPriority.empty()) {
        std::cout << "- " << lowPriority.front() << std::endl;
        lowPriority.pop();
    }

    return 0;
}
