#include <iostream>
#include <deque>

int main() {
    std::deque<std::string> tasks;

    // Adding high-priority tasks at the front
    tasks.push_front("Urgent: Fix Bug #101");
    tasks.push_front("Critical: Server Down");

    // Adding regular tasks at the back
    tasks.push_back("Write Documentation");
    tasks.push_back("Code Review");

    std::cout << "Task Queue:\n";
    for (const auto& task : tasks) std::cout << task << "\n";

    return 0;
}
