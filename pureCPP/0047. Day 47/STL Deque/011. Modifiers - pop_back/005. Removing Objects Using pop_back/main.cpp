#include <iostream>
#include <deque>

class Task {
public:
    std::string name;
    int priority;

    Task(std::string n, int p) : name(n), priority(p) {}
};

int main() {
    std::deque<Task> dq;
    dq.emplace_back("Fix Bug", 1);
    dq.emplace_back("Write Docs", 2);
    dq.emplace_back("Code Review", 3);

    std::cout << "Before pop_back: " << dq.back().name << "\n";
    dq.pop_back();
    std::cout << "After pop_back: " << dq.back().name << "\n";

    return 0;
}
